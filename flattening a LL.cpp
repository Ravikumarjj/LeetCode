#include <bits/stdc++.h>
using namespace std;
//  Definition for linked list.
 class Node {
  public:
		int data;
		Node *next;
 		Node *child;
		Node() : data(0), next(nullptr), child(nullptr){};
		Node(int x) : data(x), next(nullptr), child(nullptr) {}
		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 };
 
Node* mergeList(Node* list1, Node* list2){
	Node* dummyNode = new Node(-1);
	Node* res = dummyNode;
	while(list1!=NULL && list2!=NULL){
		if(list1->data<list2->data){
			res->child = list1;
			res=list1;
			list1=list1->child;
		}
		else{
			res->child = list2;
			res=list2;
			list2=list2->child;
		}
		res->next=nullptr;
	}
	if(list1) res->child=list1;
	else res->child=list2;
	
	if(dummyNode->child)dummyNode->child->next=nullptr;
	return  dummyNode->child;
	
	
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* mergeHead = flattenLinkedList(head->next);
	head = mergeList(head, mergeHead);
    return head;
}

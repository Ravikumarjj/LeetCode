#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
class Node {
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};


Node* findKthNode(Node* temp, int k){
    k-=1;
    while(temp!=NULL && k>0){
        k--;
        temp=temp->next;
    }
    return temp;
}
Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL)return head;
    Node* newHead = reverseLL(head->next);
    Node* front = head->next;
    front->next=head;
    head->next=nullptr;
    return newHead;
}
Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* temp = head;
    Node* nextNode = new Node(-1);
    Node* prevNode = nullptr;
    while(temp!=NULL){
        Node* kthNode = findKthNode(temp,k);
        if(kthNode ==NULL){
            if(prevNode) prevNode->next=temp;
            break;
        }
        nextNode = kthNode->next;
        kthNode->next=nullptr;
        reverseLL(temp);
        if(temp==head){
            head=kthNode;
        }
        else{
            prevNode->next=kthNode;
        }
        prevNode=temp;
        temp=nextNode;
    }
    return head;
}
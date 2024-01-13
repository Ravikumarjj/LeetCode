#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    void copyNodeInBetween(Node* head){
        Node* temp = head;
        while(temp){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next=copyNode;
            temp=temp->next->next;
        }
    }

    void connectRandomPointer(Node* head){
        Node* temp = head;
        while(temp){
          Node* copyNode = temp->next;
          if(temp->random){
              copyNode->random = temp->random->next;
          }
          else{
              copyNode->random = nullptr;
          }
          temp=temp->next->next;
        }
    }

    Node* connectNextPointer(Node* head){
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        Node* temp = head;
        while(temp){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }
    Node* copyRandomList(Node* head) {
        copyNodeInBetween(head);
        connectRandomPointer(head);
        return connectNextPointer(head);
    }
};
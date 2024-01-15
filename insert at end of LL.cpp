#include <bits/stdc++.h>
using namespace std;
    // Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
    };



Node* insertEnd(Node* head, int k) {
    // Write your code here.
    Node* newNode = new Node(k);
    if(head==NULL){
        return newNode;
    }
    
    Node* temp = head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next = newNode;
    return head;
}
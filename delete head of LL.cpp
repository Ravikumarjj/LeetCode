#include <bits/stdc++.h>
using namespace std;
// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node * deleteHead(Node *head) {
    // Write your code here.
    Node* temp = head;
    head = temp->next;
    temp->next==nullptr;
    delete temp;
    return head;
}


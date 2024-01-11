#include <bits/stdc++.h>
using namespace std;
//  Definition of linked list:

 class Node {
 public:
      int data;
      Node *next;
      Node() {
          this->data = 0;
          this->next = NULL;
      }
      Node(int data) {
          this->data = data;
          this->next = NULL;
      }
      Node (int data, Node *next) {
          this->data = data;
          this->next = next;
      }
 };

int addHelper(Node* temp){
    if(temp==NULL) return 1;
    int carry = addHelper(temp->next);
    temp->data=temp->data + carry;
    if(temp->data<10)return 0;
    temp->data = 0;
    return 1;
}

Node *addOne(Node *head)
{
    // Write Your Code Here.
    int carry = addHelper(head);
    if(carry ==1){
        Node* newNode = new Node(1);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

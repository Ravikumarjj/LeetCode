
#include <bits/stdc++.h>
using namespace std;
 class Node {
 public:
      int data;
      Node *next;

      Node(int data) {
          this->data = data;
          this->next = NULL;
      }
 };

int findLength(Node* slow, Node* fast){
    int count=1;
    slow=slow->next;
    while(fast!=slow){
        count++;
        slow=slow->next;
    }
    return count;
}
int lengthOfLoop(Node *head) {
    // Write your code here
    Node* slow = head;
    Node* fast = head;
    int count=0;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        count++;
        if(slow==fast){
            return findLength(slow,fast);
        }
    }
    return 0;
}
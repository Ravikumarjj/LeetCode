#include <bits/stdc++.h>
using namespace std;
//  Definition for linked list.
 class Node {
  public:
		int data;
		Node *next;
		Node() : data(0), next(nullptr) {};
		Node(int x) : data(x), next(nullptr) {}
		Node(int x, Node *next) : data(x), next(next) {}
 };
 

Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    if (head == NULL) return NULL;

    Node *evenHead = NULL, *oddHead = NULL;
    Node *even = NULL, *odd = NULL;

    Node *current = head;
    while (current != NULL) {
        Node *nextNode = current->next;
        current->next = NULL;

        if (current->data % 2 == 0) {
            if (evenHead == NULL) {
                evenHead = current;
                even = evenHead;
            } else {
                even->next = current;
                even = even->next;
            }
        } else {
            if (oddHead == NULL) {
                oddHead = current;
                odd = oddHead;
            } else {
                odd->next = current;
                odd = odd->next;
            }
        }

        current = nextNode;
    }

    if (evenHead == NULL) {
        return oddHead;
    }
    even->next = oddHead;
    return evenHead;


   
}

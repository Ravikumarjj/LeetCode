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


Node *deleteLast(Node *list){
    // Write your code here
    Node* temp = list;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    Node* tail = temp->next;
    temp->next = nullptr;
    delete tail;
    return list;
}
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    string data;
    Node* next;
    Node* back;
    Node() : data(0),next(nullptr), back(nullptr){};
    Node(string x) : data(x),next(nullptr), back(nullptr){};
    Node(string x,Node* next, Node* back) : data(x),next(next), back(back){};
};
class Browser
{
    public:
    Node* current = NULL;
    
    Browser(string &homepage)
    {
        // Write you code here
        current = new Node(homepage);

    }

    void visit(string &url)
    {
        // Write you code here
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->back=current;
        current = newNode;
    }

    string back(int steps)
    {
        // Write you code here
        while(steps){
            if(current->back) current = current->back;
            else break;
            steps--;
        }
        return current->data;
    }

    string forward(int steps)
    {
        // Write you code here
        while(steps){
            if(current->next) current = current->next;
            else break;
            steps--;
        }
        return current->data;
    }
};

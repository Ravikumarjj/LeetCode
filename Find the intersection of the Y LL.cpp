#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;//as there wont be any intersection so return NULL;
        }
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        while(t1!=t2){// this condition even check whether the both head are same of same LL or not 
            t1=t1->next;
            t2=t2->next;
            if(t1==t2) return t1;
            if(t1==NULL)t1=headB;
            if(t2==NULL)t2=headA;

        }
        return t1;

    }
};
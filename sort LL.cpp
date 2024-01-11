#include <bits/stdc++.h>
using namespace std;
// sorting the LL using merge sort will be best
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow= head;
        ListNode* fast = head->next;//inorder to return the node before the middle
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
                fast=fast->next->next;
            }
            return slow;
        }

    ListNode* mergeSortedList(ListNode* first, ListNode* second){
        ListNode* t1 = first;
        ListNode* t2 = second;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while(t1 && t2){
            if(t1->val<t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        if(t1) temp->next=t1;
        else temp->next=t2;
        return dummyNode->next;
    }


    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
        return head;
        }
        ListNode* middle = findMiddle(head);
        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;
        middle->next=NULL;
        leftHead = sortList(leftHead);
        rightHead= sortList(rightHead);
        return mergeSortedList(leftHead, rightHead);
    }
};
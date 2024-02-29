#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root == NULL)return true;
        queue<TreeNode*>   q;
        q.push(root);
        int level =0;
        while(!q.empty()){
            int size = q.size(),n=-1;
            for(int i =0;i<size;i++){
                TreeNode* curr = q.front();
                if(level%2==0){
                    if(curr->val%2==0) return false;
                    if(curr->val<=n) return false;
                }
                else{
                    if(curr->val%2!=0)return false;
                    if(curr->val>=n && n>0) return false;
                }
                n=curr->val;
                q.pop();
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
            }
            level++;
        }
        return true;
    }
};
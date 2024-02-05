/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector < int > inOrder;
        stack < TreeNode * > s;
        TreeNode* curr = root;
        while (true) {
          if (curr != NULL) {
            s.push(curr);
            curr = curr -> left;
          } 
          else {
            if (s.empty()) break;
            curr = s.top();
            inOrder.push_back(curr -> val);
            s.pop();
            curr = curr -> right;
          }
        }
        return inOrder;
        
    }
};
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
    
    void helper(TreeNode * root, vector<int> & ans) {
        if(root) {
            helper(root->left,ans);
            ans.push_back(root->val);
            helper(root->right,ans);
        }
    }
};
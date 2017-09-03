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
    int maxPathSum(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int m = INT_MIN;
        helper(root,m);
        return m;
    }
    
    int helper(TreeNode * root, int &m){

        if(!root) return 0;
        int left = helper(root->left ,m);
        int right = helper(root->right,m);
        m = max(m, root->val + max(left,0) + max(right,0));
        return root->val + max(max(left,0) , max(right,0));
    }
};
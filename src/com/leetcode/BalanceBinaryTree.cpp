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
    bool isBalanced(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ret = helper(root);
        if(ret != -1) return true;
        else return false;
    }
    
    int helper(TreeNode *root) {
        if(!root) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        if(left == -1 || right == -1) return -1;
        else if(abs(left - right) > 1) return -1;
        else return max(left,right) + 1;
    }
};
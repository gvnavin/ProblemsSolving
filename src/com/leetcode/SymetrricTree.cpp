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
    bool isSymmetric(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root) return true;
        return helper(root,root);
        
    }
    
    bool helper(TreeNode * r1,TreeNode *r2){
        if(!r1 && !r2) return true;
        if(!r1 || !r2) return false;
        return (r1->val == r2->val) && helper(r1->left,r2->right) && helper(r1->right,r2->left);
    }
};
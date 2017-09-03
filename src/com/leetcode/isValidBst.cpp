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
    bool isValidBST(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        TreeNode * ptr = NULL;
        return helper(root,ptr);
    }
    
    bool helper(TreeNode * r,TreeNode * &ptr){
        if(r) {
            bool st = helper(r->left,ptr);
            if(!st || (ptr && ptr->val >= r->val)) return false;
            ptr = r;
            return helper(r->right,ptr);
            
        }
        
        return true;
    }
};
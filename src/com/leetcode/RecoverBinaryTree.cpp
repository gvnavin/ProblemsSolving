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
    void recoverTree(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root) return ;
        TreeNode *x,*y,*z;
        x = y = z = NULL;
        helper(root,x,y,z);
        if(x)
        swap(x->val,y->val);
        return ;
    }
   void  helper(TreeNode *ptr, TreeNode *&a , TreeNode *&b,TreeNode *&z){
        if(ptr){
            helper(ptr->left,a,b,z);
            if(z && z->val > ptr->val ){
                if(!a) a = z;
                b = ptr;
            }
            z = ptr;
            helper(ptr->right,a,b,z);
        }
    }
};
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct node {
    TreeNode * first;
    TreeNode * last;
};

class Solution {
public:
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root) return ;
         root = helper(root)->first;
    }
    
    node * helper(TreeNode * root){
        node *ret = new node();
        ret ->first = ret->last = root;
        TreeNode * left = root->left;
        TreeNode * right = root->right;
        
        
        if(left){
            node *l = helper(left);
            root->left = NULL;
            root->right = l->first;
            ret->last = l->last;
        }
        if(right){
            node * r = helper(right);
            ret->last->right = r->first;
            ret->last = r->last;
        }
        return ret ;
    }
};
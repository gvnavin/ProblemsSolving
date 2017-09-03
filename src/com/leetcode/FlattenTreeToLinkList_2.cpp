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
     TreeNode * left ,* right;
     node() {
         left = right = 0;
     }
 };
 
class Solution {
public:
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        helper(root);
        return;
    }
    
    node * helper(TreeNode * root) {
        
        if(!root) {
            node * tmp = new node();
            return tmp;
        }
        node *ret = new node();
        ret->right = ret->left = root;
        
        if(root->left) {
         node * left = helper(root->left);
         root->left = NULL;
         left->right->right = root->right;
         root->right = left->left;
         ret->right = left->right;
        
        }
        if(root->right) {
         node * right = helper(root->right);  
         ret->right = right->right;
        }
        return ret;
    }
};
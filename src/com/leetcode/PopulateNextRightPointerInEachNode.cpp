/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root) return ;
        root->next = NULL;
        helper(root);
        
    }
    
    void helper(TreeLinkNode * root){
       if(!root) return ;
       if(root->left){
            root->left->next = root->right;
        }
       if(root->right) {
           if(root->next) root->right->next = root->next->left;
           else root->right->next = NULL;
       }
       helper(root->left);
       helper(root->right);
    }
};
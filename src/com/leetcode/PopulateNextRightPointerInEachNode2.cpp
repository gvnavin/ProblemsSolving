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
        
        if(root->next) 
            helper(root->next);
            
        if(root->left) {
             if(root->right) {
                 root->left->next = root->right;
                 root->right->next = getNextRight(root);
             }else {
                 root->left->next = getNextRight(root);
             }
            helper(root->left);
        }else if(root->right) {
             root->right->next = getNextRight(root);
             helper(root->right);
        }else helper(getNextRight(root));
    }
    
    TreeLinkNode * getNextRight(TreeLinkNode * ptr) {
        ptr = ptr->next;
        while(ptr){
            if(ptr->left) return ptr->left;
            if(ptr->right) return ptr->right;
            ptr = ptr->next;
        }
        return NULL;
    }
};
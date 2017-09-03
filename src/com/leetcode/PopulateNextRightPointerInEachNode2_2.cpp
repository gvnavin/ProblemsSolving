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
        while(root) {
            TreeLinkNode *q;
            q = root;
            while(q) {
                if(q->left) {
                    if(q->right){
                        q->left->next = q->right;
                        q->right->next = getNextRight(q);
                    }
                    else q->left->next = getNextRight(q);
                }else if(q->right){
                    q->right->next = getNextRight(q);
                }
                q= q->next;
            }
            if(root->left){
                root = root->left;
            }else if(root->right){
                root = root->right;
            }else {
                root = getNextRight(root);
            }
        }
    }
    
    TreeLinkNode * getNextRight(TreeLinkNode * ptr) {
        ptr = ptr->next;
        while(ptr){
            if(ptr->left) return ptr->left;
            if(ptr->right ) return ptr->right;
            ptr = ptr->next;
        }
        return NULL;
    }
};
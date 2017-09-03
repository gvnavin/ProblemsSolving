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
        TreeNode *a,*b,*c,*d;
        a=b=c=d = NULL;
        c= root;
        while(c){
            if(!c->left) {
                if(d && c->val < d->val){
                    if(!a) a = d;
                    b = c;
                }
                d = c;
                c = c->right;
            }else {
                TreeNode* l = c->left;
                while(l->right!=NULL && l->right!=c) l = l->right;
                if(!l->right) {
                    l->right = c;
                    c = c->left;
                }else {
                    l->right = 0;
                    if(d && c->val < d->val){
                         if(!a) a = d;
                        b = c;
                    }
                    d = c;
                    c = c->right;
                }
                
            }
        }
        if(a) swap(a->val,b->val);
        return ;
    }
};
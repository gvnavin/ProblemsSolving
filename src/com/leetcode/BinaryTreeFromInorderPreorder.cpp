/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<int, int> Map;

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!inorder.size()) return NULL;
        for(int i=0;i<inorder.size() ;i++) {
            Map[inorder[i]] = i;
        }
        helper(preorder,0,preorder.size() -1,inorder,0);
    }
    
    TreeNode * helper(vector<int> &pre, int spr, int epr ,vector<int> &in, int si) {
        if(spr > epr) return NULL;
        TreeNode * root = new TreeNode(pre[spr]);
        int x = Map[root->val] - si;
        root->left = helper(pre,spr +1, spr + x,in,si);
        root->right = helper(pre,spr + x +1,epr,in,x+si+1);
        return root;
    }
};
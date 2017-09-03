/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<int , int> Map;
class Solution {
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!inorder.size()) return NULL;
        for(int i=0; i < inorder.size() ; i++) {
            Map[inorder[i]] = i;
        }
        return helper(inorder,0,postorder,0,postorder.size()-1);
    }
    
    TreeNode * helper(vector<int> &in, int ist,vector<int> &post, int pst, int pen ) {
         if(pst > pen) return NULL;
         TreeNode * root = new TreeNode(post[pen]);
         int x = Map[post[pen]] - ist ;
         root->left = helper(in,ist,post,pst,pst + x -1); 
         root->right =helper(in,x+ ist +1,post,pst + x,pen -1);
         return root;
    }
};
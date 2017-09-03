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
    vector<TreeNode *> generateTrees(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return helper(n,1);
    }
    
    vector<TreeNode *> helper(int n , int k){
        vector<TreeNode *> ret;
        if(!n) {
            ret.push_back(NULL);
            return ret;
        }

        for(int i = 0; i<=n-1; i++){
            vector<TreeNode *> l = helper(i,k);
            vector<TreeNode *> r = helper(n-1-i,k+i+1);
            for(int s= 0; s < l.size() ;s++){
                for(int j =0; j<r.size(); j++){
                    TreeNode * root = new TreeNode(k+i);
                    root->left = l[s];
                    root->right = r[j];
                    ret.push_back(root);
                }
            }
        }
        return ret;
    }
};
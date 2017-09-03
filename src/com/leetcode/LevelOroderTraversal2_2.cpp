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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        if(!root) return ans;
        int h = getHeight(root);
        ans.resize(h);
        for(int i = h ;i>0; i--) {
            vector<int> temp;
            populate(root,i,temp);
            ans[h-i] = temp;
        }
        return ans;
    }
    
    void populate(TreeNode * root, int h, vector<int> & tmp) {
        if(h == 1) {
            tmp.push_back(root->val);
            return ;
        }
        if(root->left) populate(root->left,h-1,tmp);
        if(root->right) populate(root->right,h-1,tmp);
        
    }
    
    int getHeight(TreeNode *root) {
        if(!root) return 0;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return max(left,right) +1;
    }
};
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
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ans;
        if(!root) return ans;
        stack<TreeNode *> stk;
        stk.push(NULL);
        
        while(root) {
            if(root->left) {
             stk.push(root);
             root =root->left;
            } else {
                while(root && root->right == NULL) {
                    ans.push_back(root->val);
                    root = stk.top();
                    stk.pop();
                }
                if(root) {
                    ans.push_back(root->val);
                    root = root->right;
                }
            }    
        }
        return ans;
    }
};
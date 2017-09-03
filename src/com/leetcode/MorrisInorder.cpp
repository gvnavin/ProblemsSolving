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
        while(root){
            
            if(root->left) {
                TreeNode * temp = root->left;
                while(temp->right != NULL && temp->right != root)
                    temp = temp->right;
                if(temp->right == NULL) {
                    temp->right = root;
                    root = root->left;
                }else {
                    temp->right = NULL;
                    ans.push_back(root->val);
                    root = root->right;
                }
            }
            else {
                ans.push_back(root->val);
                root = root->right;
            }
        }
        return ans;
    }
};
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
        vector<vector<int> >ans;
        if(!root) return ans;
        queue<TreeNode *> Que;
        Que.push(root);
        helper(Que,ans,1);
        return ans;
        
    }
    
    void helper(queue<TreeNode*>& Que, vector<vector<int> >&ans, int elm ){
        int nextLevel = 0;
        vector<int> temp;
        for(int i =0 ;i < elm ; i++) {
            TreeNode * ptr = Que.front();
            Que.pop();
            temp.push_back(ptr->val);
            if(ptr->left) {
                Que.push(ptr->left);
                nextLevel++;
            }
            if(ptr->right) {
                Que.push(ptr->right);
                nextLevel++;
            }
        }
        if(elm) {
        helper(Que,ans,nextLevel);
        ans.push_back(temp);
        }
    }
};
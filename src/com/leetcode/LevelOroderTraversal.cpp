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
    vector<vector<int> > levelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        if(!root) return  ans;
        queue<TreeNode *> Que;
        Que.push(root);
        int nodeIncurrLevel, nodeInNextLevel;
         nodeIncurrLevel = 1;
        while(!Que.empty()) {
            vector<int> temp;
            nodeInNextLevel = 0;
            for(int i = 0; i < nodeIncurrLevel ; i++ ) {
                TreeNode * f = Que.front();
                Que.pop();
                temp.push_back(f->val);
                if(f->left) {
                    Que.push(f->left);
                    nodeInNextLevel++;
                }
                if(f->right) {
                    Que.push(f->right);
                    nodeInNextLevel++;
                }
            }
            ans.push_back(temp);
            nodeIncurrLevel = nodeInNextLevel;
        }
        return ans;
    }
};
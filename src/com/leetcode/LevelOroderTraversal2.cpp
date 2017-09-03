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
        h--;
        queue<TreeNode*> Que;
        Que.push(root);
        int nodeInCurrLevel,nodeInNextLevel;
        nodeInCurrLevel = 1;
        while(!Que.empty()) {
            vector<int> tmp;
            nodeInNextLevel =0;
            for(int  i =0 ;i < nodeInCurrLevel ; i++ ) {
                TreeNode * temp = Que.front();
                Que.pop();
                tmp.push_back(temp->val);
                if(temp->left) {
                    Que.push(temp->left);
                    nodeInNextLevel++;
                }
                if(temp->right) {
                    Que.push(temp->right);
                    nodeInNextLevel++;
                }
            }
           nodeInCurrLevel =  nodeInNextLevel;
           ans[h] = tmp;
           h--;
        }
        return ans;
    }
    
    int getHeight(TreeNode *root) {
        if(!root) return 0;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return max(left,right) +1;
    }
};
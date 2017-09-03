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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        if(!root) return ans;
        stack<TreeNode *> Que,tmpQue;
        Que.push(root);
        bool st = false;
        while(!Que.empty()) {
            vector<int> temp;
            while(!Que.empty()) {
                TreeNode * f = Que.top();
                Que.pop();
                temp.push_back(f->val);
                if(st) {
                    if(f->right) tmpQue.push(f->right);
                    if(f->left) tmpQue.push(f->left);
                }else {
                    if(f->left) tmpQue.push(f->left);
                    if(f->right) tmpQue.push(f->right);
                }
            }
            st = !st;
            swap(Que,tmpQue);
            ans.push_back(temp);
        }
        return ans;
    }
};
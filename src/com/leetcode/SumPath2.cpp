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
    int getHeight(TreeNode * root) {
        if(!root) return 0;
        return 1+ max(getHeight(root->left),getHeight(root->right));
    }
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        if(!root) return ans;
        
        int h = getHeight(root);
        vector<int> arr(h);
        helper(root,arr,0,ans,sum);
        return  ans;
    }
    
    void helper(TreeNode *root,vector<int> & arr, int i,vector<vector<int> >& ans,int sum) {
        if(!root) return ;
        if(!root->left && !root->right && sum == root->val){
            arr[i]=sum;
            vector<int> temp;
            for(int j=0;j<=i;j++){
                temp.push_back(arr[j]);
            }
            ans.push_back(temp);
            return ;
        }
        if(!root->left && !root->right) return ;
        arr[i]=root->val;
        if(root->left) helper(root->left,arr,i+1,ans,sum-root->val);
        if(root->right)helper(root->right,arr,i+1,ans,sum-root->val);
    }
};
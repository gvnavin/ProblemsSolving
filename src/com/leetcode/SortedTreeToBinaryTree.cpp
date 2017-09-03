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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int end =  num.size() -1;
        TreeNode *  root = helper(num, 0, end);
        return root;
    }
    
    TreeNode * helper(vector<int> &num, int st, int end) {
        if(st >end) return NULL;
        int mid = st + (end -st )/2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = helper(num,st,mid-1);
        root->right = helper(num,mid+1,end);
        return root;
    }
};
/*
#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxHeight(TreeNode *root) {
        
		if (!root) return 0;

		int leftHeight = maxHeight(root->left);
		int rightHeight = maxHeight(root->right);
		return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
    }
};*/
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

private:
	int isBalancedPrivate(TreeNode *root) {

		if (!root) return 0;

		int leftHeight = isBalancedPrivate(root->left);
		if (leftHeight == -1) return -1;
		int rightHeight = isBalancedPrivate(root->right);
		if (rightHeight == -1) return -1;
		if (abs(leftHeight-rightHeight) > 1) return -1;
		return max(leftHeight,rightHeight) +1;
	}
public:
    bool isBalanced(TreeNode *root) {
        return isBalancedPrivate(root) != -1;
    }
};*/
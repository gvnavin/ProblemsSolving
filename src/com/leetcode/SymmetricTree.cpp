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
    bool isSymmetric(TreeNode *root) {

		if (!root) return true;
		
		return isSymmetricHelper(root->left, root->right);

    }

	bool isSymmetricHelper(TreeNode *left, TreeNode *right) {
		if (!left && !right) return true;
		if (!left || !right) return false;
		return (left->val == right->val) && isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left);
	}
};*/
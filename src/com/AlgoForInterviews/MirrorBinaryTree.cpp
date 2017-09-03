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
	TreeNode *mirror(TreeNode *root) {
		if (!root) return NULL;
		TreeNode *left = mirror(root->left);
		TreeNode *right = mirror(root->right);
		root->right = left;
		root->left = right;
		return root;
	}
};

int main() {
	TreeNode *root = new TreeNode(8);
	root->left = new TreeNode(6);
	root->left->left = new TreeNode(5);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(10);
	root->right->left = new TreeNode(9);
	root->right->right = new TreeNode(11);
	TreeNode *output = Solution().mirror(root);
	system("pause");
}*/
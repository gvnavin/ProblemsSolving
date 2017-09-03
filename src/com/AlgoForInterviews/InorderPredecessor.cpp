/*
#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode *predecessor;
	TreeNode(int x) : val(x), left(NULL), right(NULL), predecessor(NULL) {}
};

class Solution {
public:
	void connectInorderPredecessor(TreeNode *root, TreeNode *&lastNode) {

		if (!root) return;
		connectInorderPredecessor(root->left, lastNode);
		root->predecessor = lastNode;
		lastNode = root;
		connectInorderPredecessor(root->right, lastNode);
	}
};

int main() {
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(4);

	root->right = new TreeNode(5);
	root->right->right = new TreeNode(6);
	TreeNode *lastNode = NULL;
	Solution().connectInorderPredecessor(root, lastNode);
	system("pause");
}*/
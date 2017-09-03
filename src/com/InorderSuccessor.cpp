/*
#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode *successor;
	TreeNode(int x) : val(x), left(NULL), right(NULL), successor(NULL) {}
};

class Solution {
public:
	void connectInorderSuccessors(TreeNode *root, TreeNode *&lastNode) {
		if (!root) return;

		connectInorderSuccessors(root->left, lastNode);
		if (lastNode != NULL) {
			lastNode->successor = root;
		}
		lastNode = root;
		connectInorderSuccessors(root->right, lastNode);
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
	Solution().connectInorderSuccessors(root, lastNode);
	system("pause");
}*/
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

	TreeNode *convertToLinkedList(TreeNode *root) {
		TreeNode *head = NULL;
		TreeNode *lastNode = NULL;
		convertToLinkedListHelper(root, head, lastNode);
		return head;
	}

	void convertToLinkedListHelper(TreeNode *root, TreeNode *&head, TreeNode *&lastNode) {
		if (!root) return;

		convertToLinkedListHelper(root->left, head, lastNode);
		if (lastNode != NULL) {
			lastNode->right = root;
			root->left = lastNode;
		}
		lastNode = root;
		if (!head) {
			head = root;
		}
		if (lastNode != NULL) {
			lastNode->right = head;
			head->left = lastNode;
		}
		convertToLinkedListHelper(root->right, head, lastNode);
	}
};

int main() {
	TreeNode *root = new TreeNode(10);
	root->left = new TreeNode(6);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(8);
	root->left->right->left = new TreeNode(7);

	root->right = new TreeNode(12);
	root->right->left = new TreeNode(11);
	root->right->right = new TreeNode(14);
	root->right->right->right = new TreeNode(18);

	TreeNode *output = Solution().convertToLinkedList(root);
	system("pause");
}*/
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
    void flatten(TreeNode *root) {
		TreeNode *lastNode = NULL;
		flattenHelper(root, lastNode); 
    }

	void flattenHelper(TreeNode *currentNode, TreeNode *&lastNode) {
		if (!currentNode) return;

		TreeNode *left = currentNode->left;
		TreeNode *right = currentNode->right;
		currentNode->left = NULL;
		if (lastNode != NULL) {
			lastNode->right = currentNode;
		}
		lastNode = currentNode;
		flattenHelper(left, lastNode);
		flattenHelper(right, lastNode);
	}
};

int main() {
	TreeNode *root = new TreeNode(1);
	root->right = new TreeNode(2);
	Solution().flatten(root);
	system("pause");
}*/
/*
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {
	}
};

class TreeUtils {
public:
	static vector<int> preorder(TreeNode *root) {

		vector<int> traversal;
		stack<TreeNode *> stk;
		TreeNode *currentNode = root;
		while (!stk.empty() || currentNode) {

			if (currentNode) {
				stk.push(currentNode);
				traversal.push_back(currentNode->val);
				currentNode = currentNode->left;
			}
			else {
				currentNode = stk.top();
				stk.pop();
				currentNode = currentNode->right;
			}
		}
		return traversal;
	}
};

int main() {
	TreeNode *root = new TreeNode(10);
	root->left = new TreeNode(8);
	root->left->right = new TreeNode(9);
	root->right = new TreeNode(12);
	root->right->left = new TreeNode(11);

	vector<int> output = TreeUtils::preorder(root);
	system("pause");
}*/
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
	static vector<int> postorder(TreeNode *root) {

		vector<int> traversal;
		TreeNode *currentNode = root;
		TreeNode *previousNode = NULL;
		stack<TreeNode *> stk;
		while (!stk.empty() || currentNode != NULL) {
			if (currentNode) {
				stk.push(currentNode);
				currentNode = currentNode->left;
			} else {
				currentNode = stk.top();
				if (currentNode->left == NULL && currentNode->right == NULL) {
					traversal.push_back(currentNode->val);
					stk.pop();
					previousNode = currentNode;
					currentNode = NULL;
				} else if (currentNode->left == previousNode) {
					if (currentNode->right == NULL) {
						traversal.push_back(currentNode->val);
						stk.pop();
						previousNode = currentNode;
						currentNode = NULL;
					} else {
						currentNode = currentNode->right;
					}
				}
				else {
					traversal.push_back(currentNode->val);
					stk.pop();
					previousNode = currentNode;
					currentNode = NULL;
				}
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

	vector<int> output = TreeUtils::postorder(root);
	system("pause");
}*/
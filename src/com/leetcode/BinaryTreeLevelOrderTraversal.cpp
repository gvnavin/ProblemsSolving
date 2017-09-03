/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
		vector<vector<int> > output;
		if (!root) return output;

		queue<TreeNode *> q;
		q.push(root);
		int currentLevelNodeCount = 1;
		int nextLevelNodeCount = 0;
		int depth = 0;
		output.push_back(vector<int>());
		while (!q.empty()) {

			TreeNode *currentNode = q.front();
			q.pop();
			--currentLevelNodeCount;

			output.back().push_back(currentNode->val);

			if (currentNode->left != NULL) {
				++nextLevelNodeCount;
				q.push(currentNode->left);
			}

			if (currentNode->right != NULL) {
				++nextLevelNodeCount;
				q.push(currentNode->right);
			}

			if (currentLevelNodeCount == 0) {
				vector<int> nodes;
				output.push_back(nodes);
				currentLevelNodeCount = nextLevelNodeCount;
				nextLevelNodeCount = 0;
			}
		}

		output.erase(output.end()-1);
		return output;
    }
};

int main() {
	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(9);

	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);

	vector<vector<int> > output = Solution().levelOrder(root);
	system("pause");
}*/
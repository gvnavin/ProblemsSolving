/*
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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        
		vector<vector<int> > output;
		if (!root) return output;

		int treeHeight = getHeight(root);
		output.resize(treeHeight);
		--treeHeight;

		int currentLevelNodeCount = 1;
		int nextLevelNodeCount = 0;
		queue<TreeNode *> q;
		q.push(root);
		while (!q.empty()) {
			TreeNode *currentNode = q.front();
			q.pop();
			--currentLevelNodeCount;
			output[treeHeight].push_back(currentNode->val);

			if (currentNode->left != NULL) {
				q.push(currentNode->left);
				++nextLevelNodeCount;
			}

			if (currentNode->right != NULL) {
				q.push(currentNode->right);
				++nextLevelNodeCount;
			}

			if (currentLevelNodeCount == 0) {
				currentLevelNodeCount = nextLevelNodeCount;
				--treeHeight;
				nextLevelNodeCount = 0;
			}
		}
		return output;
    }

	int getHeight(TreeNode *root) {
		if (!root) return 0;
		int leftHeight = getHeight(root->left);
		int rightHeight = getHeight(root->right);
		return max(leftHeight, rightHeight) + 1;
	}
};*/
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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
		
			vector<vector<int> > output;
		if (!root) return output;

		deque<TreeNode *> q;
		q.push_back(root);
		int currentLevelNodeCount = 1;
		int nextLevelNodeCount = 0;
		output.push_back(vector<int>());
		bool mode = true;
		while (!q.empty()) {

			TreeNode *currentNode = NULL;
			if (mode) {
				currentNode = q.back();
				q.pop_back();
			} else {
				currentNode = q.front();
				q.pop_front();
			}
			--currentLevelNodeCount;

			output.back().push_back(currentNode->val);

			if (mode) {
				if (currentNode->left != NULL) {
					++nextLevelNodeCount;
					if (mode) {
						q.push_front(currentNode->left);
					} else {
						q.push_back(currentNode->left);
					}
				}

				if (currentNode->right != NULL) {
					++nextLevelNodeCount;
					if (mode) {
						q.push_front(currentNode->right);
					} else {
						q.push_back(currentNode->right);
					}
				}
			}
			else {
				if (currentNode->right != NULL) {
					++nextLevelNodeCount;
					if (mode) {
						q.push_front(currentNode->right);
					} else {
						q.push_back(currentNode->right);
					}
				}

				if (currentNode->left != NULL) {
					++nextLevelNodeCount;
					if (mode) {
						q.push_front(currentNode->left);
					} else {
						q.push_back(currentNode->left);
					}
				}
			}
			if (currentLevelNodeCount == 0) {
				vector<int> nodes;
				output.push_back(nodes);
				currentLevelNodeCount = nextLevelNodeCount;
				nextLevelNodeCount = 0;
				mode = !mode;
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

	vector<vector<int> > output = Solution().zigzagLevelOrder(root);
	system("pause");
}*/
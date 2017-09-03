/*
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<TreeNode *> generateTrees(int n) {
		
		return generateTreesHelper(1, n);
    }

	vector<TreeNode *> generateTreesHelper(int start, int end) {
		
		if (start == end) {
			TreeNode* tree = new TreeNode(start);
			vector<TreeNode*> output;
			output.push_back(tree);
			return output;
		}
		if (start > end) {
			vector<TreeNode*> output;
			output.push_back(NULL);
			return output;
		}

		vector<TreeNode*> outputTrees;
		for (int i=start; i<=end; i++) {

			vector<TreeNode*> leftSubtree = generateTreesHelper(start, i-1);
			vector<TreeNode*> rightSubtree = generateTreesHelper(i+1, end);

			for (int lIndex=0; lIndex < leftSubtree.size(); lIndex++) {
				for (int rIndex=0; rIndex < rightSubtree.size(); rIndex++) {
					TreeNode* root = new TreeNode(i);
					root->left = leftSubtree[lIndex];
					root->right = rightSubtree[rIndex];
					outputTrees.push_back(root);
				}
			}
		}
		return outputTrees;
    }
};

int main() {
	vector<TreeNode*> output = Solution().generateTrees(3);
}*/
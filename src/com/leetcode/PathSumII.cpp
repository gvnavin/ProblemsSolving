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
private:
	void pathSumHelper(TreeNode *root, int sum, vector<int> &currentPath, vector<vector<int> > &paths) {

		if (!root) return;

		sum = sum-(root->val);
		currentPath.push_back(root->val);
		if (root->left == NULL && root->right == NULL && sum == 0) {
			paths.push_back(currentPath);
		}
		pathSumHelper(root->left, sum, currentPath, paths);
		pathSumHelper(root->right, sum, currentPath, paths);
		currentPath.erase(currentPath.end()-1);
	}

public:
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
		vector<vector<int> > output;
		vector<int> currentPath;
		pathSumHelper(root, sum, currentPath, output);
		return output;
    }
};*/
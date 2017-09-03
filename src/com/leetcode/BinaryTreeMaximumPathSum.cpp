/*
#include <iostream>
using namespace std;

class Solution {
public:
    int maxPathSum(TreeNode *root) {
        
		int sumOfSubtree = 0;
		int maxSum = INT_MIN;
		maxPathSum(root, sumOfSubtree, maxSum);
		return maxSum;
    }

	void maxPathSum(TreeNode *root, int &sumOfSubtree, int &maxSum) {

    	if (!root) {
			sumOfSubtree = 0;
			return;
		}

		int leftSumOfSubtree = 0;
		maxPathSum(root->left, leftSumOfSubtree, maxSum);
		int rightSumOfSubtree = 0;
		maxPathSum(root->right, rightSumOfSubtree, maxSum);
		if (leftSumOfSubtree < 0) leftSumOfSubtree = 0;
		if (rightSumOfSubtree < 0) rightSumOfSubtree = 0;
        maxSum = max(leftSumOfSubtree + rightSumOfSubtree + root->val, maxSum);
		sumOfSubtree = max(leftSumOfSubtree, rightSumOfSubtree) + root->val;
	}
};*/



//This solution works for straight paths
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
    int maxPathSum(TreeNode *root) {
        
		int maxSum = INT_MIN;
		maxPathSum(root, 0, maxSum);
		return maxSum;
    }

	void maxPathSum(TreeNode *root, int currentSum, int &maxSum) {
		if (!root) return;

		currentSum += root->val;
		int nextSum = currentSum;
		if (currentSum < 0) {
			maxSum = max(root->val,maxSum);
			nextSum = 0;
		} else {
			maxSum = max(currentSum,maxSum);
		}
		maxPathSum(root->left, nextSum, maxSum);
		maxPathSum(root->right, nextSum, maxSum);
	}
};*/

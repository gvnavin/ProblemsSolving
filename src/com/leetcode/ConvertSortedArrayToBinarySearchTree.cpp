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
    TreeNode *sortedArrayToBST(vector<int> &num) {
		
		return sortedArrayToBSTHelper(num, 0, num.size()-1);
    }

	TreeNode *sortedArrayToBSTHelper(vector<int> &num, int startIndex, int endIndex) {
		
		if (!(startIndex <= endIndex)) return NULL;

		int middle = startIndex + (endIndex - startIndex)/2;
		int rootVal = num[middle];
		TreeNode *root = new TreeNode(rootVal);
		root->left = sortedArrayToBSTHelper(num, startIndex, middle-1);
		root->right = sortedArrayToBSTHelper(num, middle+1, endIndex);
		return root;
    }
};*/
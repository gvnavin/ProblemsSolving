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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {

		int preorderIndex = 0;
		return buildTreeHelper(inorder, 0, inorder.size()-1, preorder, preorderIndex);
    }

	TreeNode *buildTreeHelper(vector<int> &inorder, int inorderStartIndex, int inorderEndIndex, vector<int> &preorder, int &preorderIndex) {

		if (!(inorderStartIndex <= inorderEndIndex)) return NULL;

		int rootValue = preorder[preorderIndex];
		int index = find(inorder, inorderStartIndex, inorderEndIndex, rootValue);
		++preorderIndex;
		TreeNode *root = new TreeNode(rootValue);
		root->left = buildTreeHelper(inorder, inorderStartIndex, index-1, preorder, preorderIndex);
		root->right = buildTreeHelper(inorder, index+1, inorderEndIndex, preorder, preorderIndex);
		return root;
    }

	int find(vector<int>& list, int searchStartIndex, int searchEndIndex, int target) {
		for (int i=searchStartIndex; i<= searchEndIndex; ++i) {
			if (list[i] == target) return i;
		}
		return -1;
	}
};*/
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
     TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {

		int postorderIndex = postorder.size()-1;
		return buildTreeHelper(inorder, 0, inorder.size()-1, postorder, postorderIndex);
    }

	TreeNode *buildTreeHelper(vector<int> &inorder, int inorderStartIndex, int inorderEndIndex, vector<int> &postorder, int &postorderIndex) {

		if (!(inorderStartIndex <= inorderEndIndex)) return NULL;

		int rootValue = postorder[postorderIndex];
		int index = find(inorder, inorderStartIndex, inorderEndIndex, rootValue);
		--postorderIndex;
		TreeNode *root = new TreeNode(rootValue);
		root->right = buildTreeHelper(inorder, index+1, inorderEndIndex, postorder, postorderIndex);
		root->left = buildTreeHelper(inorder, inorderStartIndex, index-1, postorder, postorderIndex);
		return root;
    }

	int find(vector<int>& list, int searchStartIndex, int searchEndIndex, int target) {
		for (int i=searchStartIndex; i<= searchEndIndex; ++i) {
			if (list[i] == target) return i;
		}
		return -1;
	}
};*/
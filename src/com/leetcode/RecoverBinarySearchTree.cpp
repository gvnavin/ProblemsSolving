/*
#include <iostream>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {

private: 
	void recoverTreeHelper(TreeNode *root, TreeNode *&prev, TreeNode *&left, TreeNode *&right, TreeNode *&middle) {

		if (!root) return;

		recoverTreeHelper(root->left, prev, left, right, middle);
		if (prev != NULL && (prev->val > root->val)) {
			if (left == NULL) {
				left = prev;
				middle = root;
			} else {
				right = root;
			}
		}
		prev = root;
		recoverTreeHelper(root->right, prev, left, right, middle);
	}
public:
    void recoverTree(TreeNode *root) {
		TreeNode *prev = NULL;
		TreeNode *left = NULL, *right = NULL, *middle = NULL;
		recoverTreeHelper(root, prev, left, right, middle);
		if (left && right) {
			swap(&left->val,&right->val);
		} else {
			swap(&left->val,&middle->val);
		}
	}

	void swap(int *a, int *b) {
		int c = *a;
		*a = *b;
		*b = c;
	}

};*/
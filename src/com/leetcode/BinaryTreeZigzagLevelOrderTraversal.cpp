/*
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

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

		bool leftToRight = true;
		stack<TreeNode *> stackOne;
		stack<TreeNode *> stackTwo;
		stack<TreeNode *> *currentStack = &stackOne;
		stack<TreeNode *> *nextStack = &stackTwo;
		currentStack->push(root);
		output.resize(output.size()+1);
		while (!currentStack->empty()) {
			TreeNode *currentNode = currentStack->top();
			currentStack->pop();

			if (currentNode != NULL) {
				output.back().push_back(currentNode->val);
				if (leftToRight) {
					nextStack->push(currentNode->left);
					nextStack->push(currentNode->right);
				} else {
					nextStack->push(currentNode->right);
					nextStack->push(currentNode->left);
				}
			}	
			if (currentStack->empty()) {
				output.resize(output.size()+1);
				if (currentStack == &stackOne) {
					currentStack = &stackTwo;
					nextStack = &stackOne;
				} else {
					currentStack = &stackOne;
					nextStack = &stackTwo;
				}
				leftToRight = !leftToRight;
			}
		}
		output.resize(output.size()-2);
		return output;
    }
};*/
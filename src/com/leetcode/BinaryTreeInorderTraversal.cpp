
// Solution 1 by modifying the input tree itself. Basically blanking node->left to remember an already visited node
/*
#include <iostream>
#include <vector>
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
    vector<int> inorderTraversal(TreeNode *root) {
        
		vector<int> output;
		if (!root) return output;
		
		stack<TreeNode*> inorderStack;
		inorderStack.push(root);
		while (!inorderStack.empty()) {
			TreeNode* stackTop = inorderStack.top();
			if (stackTop->left) {
				inorderStack.push(stackTop->left);
				stackTop->left = NULL;
			}
			else {
				output.push_back(stackTop->val);
				inorderStack.pop();
				if (stackTop->right) {
					inorderStack.push(stackTop->right);
				}
			}
		}
		return output;
    }
};*/

// Solution 2 using currentNode pointer
/*
#include <iostream>
#include <vector>
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
    vector<int> inorderTraversal(TreeNode *root) {
        
		vector<int> output;
		if (!root) return output;
		
		stack<TreeNode*> inorderStack;
		TreeNode* currentNode = root;
		while (!inorderStack.empty() || currentNode) {
			if (currentNode) {
				inorderStack.push(currentNode);
				currentNode = currentNode->left;
			}
			else {
				currentNode = inorderStack.top();
				inorderStack.pop();
				output.push_back(currentNode->val);
				currentNode = currentNode->right;
			}
		}
		return output;
    }
};*/
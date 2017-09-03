/*
#include <iostream>

using namespace std;

struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
private:

	TreeLinkNode *getNextNode(TreeLinkNode *node, TreeLinkNode *parent) {
		if (parent->left == node && parent->right != NULL) {
			return parent->right;
		}
		while (parent->next != NULL) {
			if (parent->next->left != NULL) {
				return parent->next->left;
			} else if (parent->next->right != NULL) {
				return parent->next->right;
			}
			parent = parent->next;
		}
		return NULL;
	}

	void connectHelper(TreeLinkNode *node, TreeLinkNode *parent) {

		if (!node) return;
		if (parent != NULL) {
			node->next = getNextNode(node, parent);
		}
		connectHelper(node->right, node);
		connectHelper(node->left, node);
		
	}
public:
    void connect(TreeLinkNode *root) {
        
		connectHelper(root, NULL);
    }
};

int main() {
	TreeLinkNode *root = new TreeLinkNode(0);
	
	root->left = new TreeLinkNode(2);
	root->left->left = new TreeLinkNode(4);
	root->left->right = new TreeLinkNode(5);

	root->right = new TreeLinkNode(3);
	root->right->left = new TreeLinkNode(6);
	Solution().connect(root);
	system("pause");
}*/
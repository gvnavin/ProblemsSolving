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
	TreeNode *deserialize(const vector<int>& postOrder) {
		int index = postOrder.size()-1;
		return deserializeHelper(postOrder, index, INT_MIN, INT_MAX);
	}

	TreeNode *deserializeHelper(const vector<int>& postOrder, int& index, int min, int max) {
		if (index < 0) return NULL;
		int currentVal = postOrder[index];
		if (currentVal > min && currentVal < max) {
			--index;
			TreeNode *root = new TreeNode(currentVal);
			root->right = deserializeHelper(postOrder, index, currentVal, max);
			root->left = deserializeHelper(postOrder, index, min, currentVal);
			return root;
		}
		return NULL;
	}
};

int main() {
	int postOrder[] = {5,7,6,9,11,10,8};
	vector<int> postOrderVec(postOrder, postOrder + sizeof(postOrder)/sizeof(int));
	TreeNode *output = Solution().deserialize(postOrderVec);
	system("pause");
}*/
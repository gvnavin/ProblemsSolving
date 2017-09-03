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
	bool verifyPostOrder(const vector<int>& postOrder) {
		int index = postOrder.size()-1;
		deserializeHelper(postOrder, index, INT_MIN, INT_MAX);
		return index == -1;
	}

	void deserializeHelper(const vector<int>& postOrder, int& index, int min, int max) {
		if (index < 0) return;
		int currentVal = postOrder[index];
		if (currentVal > min && currentVal < max) {
			--index;
			deserializeHelper(postOrder, index, currentVal, max);
			deserializeHelper(postOrder, index, min, currentVal);
			return;
		}
		return;
	}
};

int main() {
	//int postOrder[] = {5,7,6,9,11,10,8};
	int postOrder[] = {7,4,6,5};
	vector<int> postOrderVec(postOrder, postOrder + sizeof(postOrder)/sizeof(int));
	bool output = Solution().verifyPostOrder(postOrderVec);
	system("pause");
}*/
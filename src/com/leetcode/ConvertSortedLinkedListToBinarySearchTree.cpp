/*
#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {

		ListNode *currentListNode = head;
		int listSize = size(head);
		return sortedListToBSTHelper(currentListNode, 0, listSize-1);
    }

	TreeNode *sortedListToBSTHelper(ListNode *&currentListNode, int startIndex, int endIndex) {

		if (!(startIndex <= endIndex)) return NULL;

		int middle = startIndex + (endIndex - startIndex)/2;
		TreeNode *left = sortedListToBSTHelper(currentListNode, startIndex, middle-1);
		int nodeVal = currentListNode->val;
		currentListNode = currentListNode->next;
		TreeNode *right = sortedListToBSTHelper(currentListNode, middle+1, endIndex);
		TreeNode *root = new TreeNode(nodeVal);
		root->left = left;
		root->right = right;
		return root;
    }

	int size(ListNode *head) {
		int count = 0;
		while (head) {
			++count;
			head = head->next;
		}
		return count;
	}
};*/
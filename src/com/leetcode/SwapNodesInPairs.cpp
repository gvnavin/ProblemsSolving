/*
#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        
		if (!head) return NULL;

		ListNode* currentNode = head;
		ListNode* nextNode = currentNode->next;
		if (!nextNode) return currentNode;

		ListNode* swappedNodes = swapPairs(nextNode->next);
		nextNode->next = currentNode;
		currentNode->next = swappedNodes;
		return nextNode;
    }
};*/
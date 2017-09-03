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
    ListNode *deleteDuplicates(ListNode *head) {

		if (!head) return NULL;
		
		ListNode *HEAD_SENTINAL = new ListNode(INT_MIN);
		ListNode *outputHead = HEAD_SENTINAL;
		ListNode *output = outputHead;
		ListNode *previousNode = head;
		ListNode *currentNode = head->next;
		int previousNodeCount = 1;
		while (currentNode) {
			if (previousNode->val != currentNode->val) {
				if (previousNodeCount == 1) {
					output->next = previousNode;
					output = output->next;
				}
				previousNodeCount = 1;
				previousNode = currentNode;
			} else {
				++previousNodeCount;
			}
			currentNode = currentNode->next;
		}
		if (previousNodeCount == 1) {
			output->next = previousNode;
            output = output->next;
		}
		output->next = NULL;
		outputHead = outputHead->next;
		delete HEAD_SENTINAL;
		return outputHead;
    }
};*/
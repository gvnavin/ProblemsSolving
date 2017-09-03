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
		
		int previousNodeValue = head->val;
		ListNode* writeNode = head;
		ListNode* currentNode = head->next;
		while (currentNode) {
			if (previousNodeValue != currentNode->val) {
				writeNode->next = currentNode;
				writeNode = writeNode->next;
				previousNodeValue = currentNode->val;
			}
			currentNode = currentNode->next;
		}

		writeNode->next = NULL;
		return head;
    }
};*/
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
    ListNode *reverseKGroup(ListNode *head, int k) {

		if (k <= 1) return head;

		ListNode* outputHead = NULL;
		ListNode* outputTail = NULL;
		int count = 0;
		while (head) {
			ListNode* groupBeg = NULL;
			ListNode* groupEnd = NULL;
			for (int i=0; i<k && head; ++i) {
				if (i == 0) {
					groupBeg = head;
				} else if (i == k-1) {
					groupEnd = head;
				}
				head = head->next;
			}
			ListNode* subpartHead = NULL;
			ListNode* subpartTail = NULL;
			if (groupEnd) {
				groupEnd->next = NULL;
				reverse(groupBeg,NULL, subpartHead, subpartTail);
			} else {
				subpartHead = groupBeg;
			}
			if (outputHead == NULL) {
				outputHead = subpartHead;
				outputTail = subpartTail;
			} else {
				outputTail->next = subpartHead;
				outputTail = subpartTail;
			}
		}
		return outputHead;
    }

	void reverse(ListNode* currentNode, ListNode* previousNode, ListNode*& outputHead, ListNode*& outputTail) {
		
		if (currentNode->next == NULL) {
			outputHead = currentNode;
		}
		if (previousNode == NULL) {
			outputTail = currentNode;
		}
		if (currentNode->next != NULL) {
			reverse(currentNode->next, currentNode, outputHead, outputTail);
		}
		currentNode->next = previousNode;
	}
};

int main() {
	ListNode* head = new ListNode(1);
	//head->next = new ListNode(2);
	//head->next->next = new ListNode(3);
	//head->next->next->next = new ListNode(4);
	//head->next->next->next->next = new ListNode(5);
	//ListNode* outputHead = NULL;
	//ListNode* outputTail = NULL;
	ListNode* output = Solution().reverseKGroup(head,2);
	system("pause");
}*/
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        
		ListNode *HEAD_SENTINAL = new ListNode(INT_MIN);
		ListNode *currentNode = HEAD_SENTINAL;
		int carry = 0;
		while (l1 != NULL || l2 != NULL || carry == 1) {
			int currentDigit = 0;
			if (l1 != NULL) {
				currentDigit += l1->val;
				l1 = l1->next;
			}
			if (l2 != NULL) {
				currentDigit += l2->val;
				l2 = l2->next;
			}
			currentDigit += carry;
			carry = currentDigit/10;
			currentDigit %= 10;
			currentNode->next = new ListNode(currentDigit);
			currentNode = currentNode->next;
		}
		return HEAD_SENTINAL->next;
    }
};*/
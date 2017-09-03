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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        
		ListNode *currentNode = head;
		ListNode *previousNode = NULL;
		ListNode *mStartPrev = NULL;
		ListNode *mStart = NULL;
		ListNode *mEnd = NULL;
		int count = 1;
		while (currentNode && count <= n) {
			if (count == m) {
				mStartPrev = previousNode;
				mStart = currentNode;
			} 
			if (count == n) {
				mEnd = currentNode;
			}
			previousNode = currentNode;
			currentNode = currentNode->next;
			++count;
		}
		ListNode *mEndNext = mEnd->next;
		mEnd->next = NULL;
		ListNode *reverseOutputHead = NULL;
		ListNode *reverseOutputTail = NULL;
		reverse(mStart, NULL, reverseOutputHead, reverseOutputTail);
		if (mStartPrev != NULL) {
			mStartPrev->next = reverseOutputHead;
			reverseOutputTail->next = mEndNext;
			return head;
		} else {
			reverseOutputTail->next = mEndNext;
			return reverseOutputHead;
		}
    }

	void reverse(ListNode *currentNode, ListNode *previousNode, ListNode *&outputHead, ListNode *&outputTail) {

		if (previousNode == NULL) {
			outputTail = currentNode;
		}
		if (currentNode->next == NULL) {
			outputHead = currentNode;
		}
		if (currentNode->next != NULL) {
			reverse(currentNode->next, currentNode, outputHead, outputTail);
		}
		currentNode->next = previousNode;
	}
};

int main() {
	ListNode *head = new ListNode(0);
	Solution().reverseBetween(head,1,1);
}*/
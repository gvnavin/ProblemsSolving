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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
    	if (n == 0) return head;
		int count = -1;
		ListNode* aheadNodes = removeNthFromEndHelper(head, n, count);
		if (count == n) {
			aheadNodes = aheadNodes->next;
		}
		return aheadNodes;
    }

	ListNode *removeNthFromEndHelper(ListNode* head, int n, int& count) {
		
		if (head == NULL) {
			count = 0;
			return NULL;
		}

		ListNode* aheadNodes = removeNthFromEndHelper(head->next, n, count);
		if (count == n) {
			head->next = aheadNodes->next;
		}
		count = count+1;
		return head;
	}
};
int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	ListNode* output = Solution().removeNthFromEnd(head, 2);
	system("pause");
}*/
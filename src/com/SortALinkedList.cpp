/*
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL)
	{
	}
};

class ListUtils {

private:
	static ListNode *merge(ListNode *head1, ListNode *head2) {
		if (!head1) return head2;
		if (!head2) return head1;
		ListNode *output = NULL;
		if (head1->val < head2->val) {
			output = head1;
			output->next = merge(head1->next, head2);
		} else {
			output = head2;
			output->next = merge(head1, head2->next);
		}
		return output;
	}

public:

	static ListNode *sort(ListNode *head) {
		if (!head) return NULL;
		int size = length(head);
		return sort(head, size);
	}

	static ListNode *sort(ListNode *head, int length) {
		
		if (length == 0) return NULL;
		if (length == 1) return head;

		ListNode *head1 = head;
		int size1 = length/2;
		int count = 1;
		while (count < size1) {
			head = head->next;
		}
		ListNode *head2 = head->next;
		head->next = NULL;
		int size2 = length - size1;
		ListNode *left = sort(head1, size1);
		ListNode *right = sort(head2, size2);
		ListNode *mergedLeftRight = merge(left, right);
		return mergedLeftRight;
	}

	static int length(ListNode *head) {
		int count = 0;
		while (head) {
			++count;
			head = head->next;
		}
		return count;
	}
};

int main() {
	ListNode *head = new ListNode(5);
	head->next = new ListNode(7);
	head->next->next = new ListNode(2);
	ListNode *sorted = ListUtils::sort(head);
	system("pause");
}*/
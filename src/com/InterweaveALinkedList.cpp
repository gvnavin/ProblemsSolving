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
	static void reverse(ListNode *head, ListNode *prev, ListNode *&outputHead, ListNode *&outputTail) {
		if (prev == NULL) {
			outputTail = head;
		}
		if (head->next != NULL) {
			reverse(head->next, head, outputHead, outputTail);
		} else {
			outputHead = head;
		}
		head->next = prev;
	}

public:
	static ListNode *interweave(ListNode *head) {
		int size = length(head);
		if (size == 0 || size == 1) return head;
		int count = 1;
		ListNode *firstHalf = head;
		while (count < size/2) {
			head = head->next;
			++count;
		}
		ListNode *secondHalf = head->next;
		head->next = NULL;
		pair<ListNode*,ListNode*> reversedSecondHalf = reverse(secondHalf);
		ListNode *merged = merge(firstHalf, reversedSecondHalf.first);
		return merged;
	}

	static ListNode *merge(ListNode *head1, ListNode *head2) {
		if (!head1) return head2;
		if (!head2) return head1;
		ListNode *merged = merge(head1->next, head2->next);
		ListNode *output = head1;
		output->next = head2;
		output->next->next = merged;
		return output;
	}

	static pair<ListNode*,ListNode*> reverse(ListNode *head) {
		ListNode *outputHead = NULL;
		ListNode *outputTail = NULL;
		ListNode *prev = NULL;
		reverse(head, prev, outputHead, outputTail);
		return make_pair(outputHead, outputTail);
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
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	ListNode *output = ListUtils::interweave(head);
	system("pause");
}*/
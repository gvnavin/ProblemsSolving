class Solution {
public:
    int getLength(ListNode * root , ListNode *&p) {
		if(!root) return 0;
		int len =0;
		while(root) {len++; p = root ;root = root->next; }
		return len;
	}
    ListNode *rotateRight(ListNode *head, int k) {
		if(!k) return head;
        if(!head) return head;
		ListNode *last = NULL;
		int len = getLength(head,last);
		k %= len;
		if(!k ) return head;
        
		ListNode * ptr = head;
		k = len -k;
		k--;
		while(k--) ptr = ptr->next;
		ListNode * ret = ptr->next;
        ptr->next = NULL;
		last->next = head;
		return ret;
	}
};
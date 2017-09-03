/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        m--;
        n--;
        ListNode **p1,*p2;
        p1 = &head; p2 = head;
        while(m--) p1= &(*p1)->next;
        while(n--) p2 = p2->next;
        ListNode *ret = *p1;
        ListNode * next = p2->next;
        reverse(p1,p2);
        ret->next = next;
        return head;
        
    }
    
    void reverse(ListNode **a,ListNode *b){
        ListNode * p = NULL;
        ListNode * q = *a;
        while(p!=b){
            ListNode *r = q->next;
            q->next = p;
            p = q;
            q = r;
        }
        *a = p;
    }
};
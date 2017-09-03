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
    ListNode *reverseKGroup(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!k) return head;
        
        ListNode **p1 = &head;
        while(*p1){
            ListNode *p2 = *p1;
            int x = k;
            while(--x&&p2){
                p2 = p2->next;
            }
            if(!p2) return head;
            ListNode * next = p2->next;
            ListNode * first = *p1;
            reverse(p1,p2);
            first->next = next;
            p1 = &(first->next);
        }
        
        return head;
    }
    
    void reverse(ListNode **p1,ListNode *p2){
        ListNode *b = *p1;
        ListNode *a = NULL;
        while(a!=p2){
            ListNode * c = b->next;
            b->next = a;
            a = b;
            b = c;
        }
        *p1 = a;
    }

};
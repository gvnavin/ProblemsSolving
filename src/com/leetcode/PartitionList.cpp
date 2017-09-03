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
    ListNode *partition(ListNode *head, int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode * p1,*p2;
        p1 = p2 = NULL;
        ListNode **a,**b;
        a = &p1; b = &p2;
        while(head){
            if(head->val < x) {
                *a = head;
                a = &((*a)->next);
            }else {
                *b = head;
                b = &((*b)->next);
            }
            head = head->next;
        }
        
        *a=p2;
        *b=NULL;
        return p1;
    }
};
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
    ListNode *addTwoNumbers(ListNode *L1, ListNode *L2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() functio
        
        ListNode * l1,*l2;
        l1 = L1;
        l2 = L2;
        
        if(!l1) return l2;
        if(!l2) return l1;
        
        int carry = 0;
        ListNode * ptr;
        while(l1&&l2) {
            int temp = (l1->val + l2->val + carry );
            l1->val = temp %10;
            carry = temp /10;
            ptr = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1) {
            int temp = (l1->val + carry );
            l1->val = temp %10;
            carry = temp /10;
            ptr= l1;
            l1 = l1->next;
        }
        while(l2) {
            int temp = (l2->val + carry );
            ptr->next = new ListNode(0);
            ptr = ptr->next;
            ptr->val = temp%10;
            carry = temp/10;
            l2 = l2->next;
        }
        if(carry) {
            ptr->next = new ListNode(1);
        }
        
        return L1;
    }
};
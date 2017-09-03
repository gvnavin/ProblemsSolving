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
    ListNode *swapPairs(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode **ptr = &head;
        while(*ptr){
            ListNode *next = (*ptr)->next;
            if(next){
                ListNode *nextToNext = next->next;
                next->next = *ptr;
                (*ptr)->next = nextToNext;
                *ptr = next;
                ptr = &((*ptr)->next->next);
            }else {
                break;
            }
        }
        return head;
    }
};
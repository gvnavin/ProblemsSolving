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
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode * ret = head;
        while(head) {
            if(head->next && head->val == head->next->val){
                ListNode * next = head->next;
                head->next = next->next;
                delete next;
            }else {
                head = head->next;
            }
        }
        return ret;
    }
};
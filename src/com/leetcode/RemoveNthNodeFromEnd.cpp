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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        n--;
        ListNode *p1 = head;
        while(n--){
            p1=p1->next;
        }
        
        ListNode **p2 = &head;
        while(p1->next){
            p1=p1->next;
            p2 = &(*p2)->next;
        }
        *p2 = (*p2)->next;
        
        return head;
    }
};
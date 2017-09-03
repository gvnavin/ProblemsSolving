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
        ListNode * ptr = new ListNode(INT_MIN);
        ptr->next = head;
        ListNode *c = ptr;
        while(c->next){
            ListNode * n = c->next;
            ListNode * m = n->next;
            int var =0;
            while(m && n->val == m->val){
                var++;
                m = m->next;
            }
            
            if(var){
                c->next = m;
            }else {
            c = c->next;
            }
        }
        
        return ptr->next;
    }
};
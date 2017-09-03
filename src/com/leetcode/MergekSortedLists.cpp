/**
 * Definition for singly-Listed list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode * mergeTwo(ListNode * a, ListNode * b){
        if(!a) return b;
        if(!b) return a;
        ListNode *x = new ListNode(1);
        ListNode *y = x;
        
        while(a && b) {
            if(a->val > b->val){
                y->next = b;
                b = b->next;
            }else {
                y->next = a;
                a = a->next;
            }
            y = y->next;
        }
        if(a) {
            y->next = a;
        }
        if(b) {
            y->next = b;
        }
        return x->next;
    }
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // Start typing your C/C++ solution below
        // DO NOT  int main() function
        if(!lists.size()) return NULL;
        int sz = lists.size();
        while(sz!=1) {
            int j = 0;
            for(int i =0; i<sz; i+=2){
                lists[j++] = mergeTwo(lists[i],i+1<sz?lists[i+1]:NULL);
            }
            sz = j;
        }
        
        return lists[0];
    }
};
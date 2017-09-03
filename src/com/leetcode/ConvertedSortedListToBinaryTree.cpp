/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!head) return NULL;
        int st ,end;
        st=end=0;
        ListNode * ptr = head->next;
        while(ptr) 
        { ptr= ptr->next;
          end++;
        }
        
        return helper(head,st,end);
    }
    
    TreeNode * helper(ListNode * &head, int st, int end) {
        if(st > end) return NULL;
        TreeNode * root = new TreeNode(0);
        int mid = (st+end)/2;
        root->left = helper(head,st,mid-1);
        root->val  =  head->val;
        head = head->next;
        root->right = helper(head,mid+1,end);
        return root;
    }
};
class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> >ans;
        int arr[k];
        helper(1,n,k,arr,-1,ans);
        return ans;
    }
    
    void helper(int curr,int n, int k ,int arr[], int top, vector<vector<int> > &ans) {
        if(top == k -1) {
            vector<int> temp;
            for(int  i =0; i <=top ; i++ ) 
            temp.push_back(arr[i]);
            ans.push_back(temp);
            return ;
        }
        if(curr > n) return ;
        helper(curr +1,n,k,arr,top,ans);
        arr[++top] = curr;
        helper(curr +1,n,k,arr,top,ans);
    }
};
class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        sort(S.begin(),S.end());
        int arr[S.size()];
        int top = -1;
        helper(0,S.size(),arr,top,S,ans);
        return ans;
    }
    
    void helper(int ind, int sz, int arr[], int top,vector<int> &S,vector<vector<int> > &ans){
        if(ind == sz){
            vector<int> temp;
            for(int i =0;i <=top; i++){
                temp.push_back(arr[i]);
            }
            ans.push_back(temp);
            return;
        }
        int x = ind;
        while(x < sz && S[x] == S[ind]) x++;
        
        helper(x,sz,arr,top,S,ans);
        
        for(int i =ind; i<x ; i++){
            arr[++top] = S[ind];
            helper(x,sz,arr,top,S,ans);
        }
        
    }
};
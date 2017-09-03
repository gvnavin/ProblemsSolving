class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        int arr[S.size()];
        int top = -1;
        sort(S.begin(),S.end());
        helper(0,S.size(),arr,top,S,ans);
        return ans;
        
    }
    void helper(int ind, int sz, int arr[], int top,vector<int> &S,vector<vector<int> > &ans){
        if(ind == sz) {
            vector<int> temp;
            for(int i =0; i<=top;i++){
                temp.push_back(arr[i]);
            }
            ans.push_back(temp);
            return ;
        }
        helper(ind+1,sz,arr,top,S,ans);
        arr[++top] = S[ind];
        helper(ind+1,sz,arr,top,S,ans);
    }
};
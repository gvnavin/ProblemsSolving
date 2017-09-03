class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &can, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        int arr[can.size()];
        sort(can.begin(),can.end());
        helper(can,0,0,tar,ans,arr,-1);
        return ans;
    }
    
    void helper(vector<int> &can,int ind, int sum , int tar, vector<vector<int> > &ans, int arr[], int top) {
        if(sum == tar) {
            vector<int> temp;
            for(int  i =0 ; i<=top ; i++)
            temp.push_back(arr[i]);
            ans.push_back(temp);
            return ;
        }
        if(ind >= can.size() || sum > tar) return ;
        
        helper(can,ind+1,sum,tar,ans,arr,top);
        while(sum+ can[ind] <=tar) {
         sum+=can[ind];
         arr[++top] = can[ind];
         helper(can,ind+1,sum,tar,ans,arr,top);   
        }
    }
};
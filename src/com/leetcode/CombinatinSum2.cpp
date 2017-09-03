class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        int arr[num.size()];
        sort(num.begin(),num.end());
        helper(num,0,0,tar,ans,arr,-1);
        return ans;
    }
    
    void helper(vector<int> &num, int ind, int sum , int tar,vector<vector<int> > &ans, int arr[], int top){
        if(tar == sum ) {
            vector<int> temp;
            for(int i=0; i<=top; i++)
            temp.push_back(arr[i]);
            ans.push_back(temp);
            return ;
        }
        if(ind >= num.size() || sum > tar) return ;
        int x = ind;
        while(x < num.size() && num[x] == num[ind]) x++;
        helper(num,x,sum,tar,ans,arr,top);
        for(int i = ind ; i<x ;i++) {
            sum+=num[i];
            arr[++top] = num[i];
            helper(num,x,sum,tar,ans,arr,top);
        }
    }
};
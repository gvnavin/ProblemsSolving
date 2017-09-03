class Solution {
public:
    int *arr;
    int ans;
    int totalNQueens(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        arr = new int[n+1];
        memset(arr,0,sizeof(int)*(n+1));
        ans =0;
        solve(1,n);
        return ans;
    }
    
    void solve(int i, int n){
        for(arr[i] = 1; arr[i] <=n ; arr[i]++){
            if(isValid(i)){
                if(i==n){
                    ans++;
                }else {
                    solve(i+1,n);
                }
            }
        }
    }
    
    bool isValid(int a) {
        int j =1;
        while(arr[a]!=arr[j] && abs(arr[a]-arr[j])!=abs(a-j)) j++;
        return a==j? true:false;
    }
};
class Solution {
public:
    int *arr1;
    int *arr2;
    int *arr3;
    int *arr4;
    int ans ;
    int totalNQueens(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        arr1 = new int[n+1];
        arr2 = new int[2*n+2];
        arr3 = new int[2*n+2];
        arr4 = new int[2*n+2];
        memset(arr1,-1,sizeof(int)*(n+1));
        memset(arr2,-1,sizeof(int)*(n+1));
        memset(arr3,-1,sizeof(int)*(n+1));
        memset(arr4,-1,sizeof(int)*(n+1));
        ans = 0;
        solve(1,n);
        return ans;
    }
    
    void solve(int a, int n){
        for(arr1[a] = 1; arr1[a] <=n; arr1[a]++){
                if(isValid(a,n)){
                    if(a == n){
                        ans++;
                    }else {
                        solve(a+1,n);
                    }
                  arr2[arr1[a]] = arr3[n+a-arr1[a]] = arr4[2*n+1 - i - arr1[i]] == -1;
                }
        }
    }
    
    bool isValid(int i,int n){
      if(arr2[arr1[i]] == -1 && arr3[n+i-arr1[i]] == -1 && arr4[2*n+1 - i - arr1[i]] == -1){
            arr2[arr1[i]] = arr3[n+i-arr1[i]] = arr4[2*n+1 - i - arr1[i]] == 1;
            return true;
        }
        return false;
    }
};
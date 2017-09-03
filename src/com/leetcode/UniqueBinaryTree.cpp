class Solution {
public:
    int numTrees(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int arr[n+1];
        memset(arr,-1,sizeof(arr));
       return helper(n,arr);
    }
    
    int helper(int n, int arr[]){
        if(!n || n==1) return 1;
        int &ret = arr[n];
        if(ret != -1) return ret;
        ret =0;
        for(int i=0;i<=n-1;i++){
            int l = helper(i,arr);
            int r = helper(n-1-i,arr);
            ret += l*r;
        }
        return ret;
    }
};
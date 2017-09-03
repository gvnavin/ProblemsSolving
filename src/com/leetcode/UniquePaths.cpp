class Solution {
public:
    int uniquePaths(int m, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        m--;n--;
        return (int)helper(m+n,n);
    }
    
    long long helper(int n, int m){
        if(m==0) return 1;
        return n*(long long)helper(n-1,m-1)/m;
    }
    
    
    
};
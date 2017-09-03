class Solution {
public:
    int trap(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n<=2) return 0;
        int ans =0;
        int B[n];
        int m = 0;
        for(int i =n-1; i>=0;i--){
            B[i] = m;
            m = max(m,A[i]);
        }
        m=0;
        for(int i =0; i<n;i++){
           if(m>A[i] &&B[i] > A[i] ){
            ans+= min(m,B[i]) - A[i];
           }
           m = max(m,A[i]);
        }
        
        return ans;
    }
    
};
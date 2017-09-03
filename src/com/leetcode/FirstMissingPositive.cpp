class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!n) return 1;
        int i =0;
        while(i<n) {
            int val = A[i];
            if(val>=0 && val <=n-1 && A[val] != val) {
                A[i]=A[val];
                A[val] = val;
                continue;
            }
            i++;
        }
        
        i=1;
        while(i<n && A[i]==i) i++;
        if(i<n) return i;
        if(A[0] == n) return n+1;
        else return n;
        
    }
};
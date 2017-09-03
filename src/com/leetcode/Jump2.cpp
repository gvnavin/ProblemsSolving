class Solution {
public:
    int jump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==0||n==1) return 0;
        int ind = 0;
        int count = 0;
        while(ind < n-1) {
            int x = A[ind];
            int max = ind +1;
            int i;
            for(i = ind +1; i<= ind+x && i <=n-1; i++) {
                if(A[max] + max < i+A[i]) {
                    max = i;
                }
            }
            count ++;
            if(ind+x >=n-1) return count;
            ind = max;
            
        }
    
    }
};                         
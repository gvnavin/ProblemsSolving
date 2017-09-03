class Solution {
public:
    int maxSubArray(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        assert(n);
        int max = A[0];
        int tmp = A[0];
        for(int i =1; i<n;i++) {
            if(tmp < 0) {
                tmp = 0;
            }
            tmp+=A[i];
            if(max < tmp){
                max = tmp;
            }
        }
        
        return max;
    }
};
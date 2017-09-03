class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sz = m+n -1;
        m--;
        n--;
        while(m>=0 && n>=0){
            if(A[m] > B[n]){
                A[sz] = A[m];
                m--;
            }else {
                A[sz] = B[n];
                n--;
            }
            sz--;
        }
      while(n>=0){
          A[sz--]=B[n--];
      }
    }
};
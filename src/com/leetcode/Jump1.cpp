class Solution {
public:
    bool canJump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
       int index = 0;
       while(index < n-1) {
           int x = A[index];
           int max = index + 1;
           if(!x) return false;
           int i;
           for( i = index +1; i<=index+x; i++){
               if(max < A[i] + i) {
                   max = i;
               }
           }
        index = max;
       
       }       
       return true;
    }
};
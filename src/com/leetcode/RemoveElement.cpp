class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
      int j = -1;
      for(int i =0; i < n; i++){
          if(A[i]!=elem){
              swap(A[++j],A[i]);
          }
      }
      return j+1;
    }
};
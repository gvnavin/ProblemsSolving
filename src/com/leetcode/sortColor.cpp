class Solution {
public:
    void sortColors(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int  i =-1;
        int j = n;
        int  k=0;
        while(k<j){
            if(A[k]==0){
                swap(A[++i],A[k]);
                k++;
            }else if(A[k] == 2) {
                swap(A[--j],A[k]);
            }else {
                k++;
            }
        }
    }
};
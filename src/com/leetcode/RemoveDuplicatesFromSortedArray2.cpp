class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n<=2) return n;
        int j=0;
        for(int i=1;i<n;i++){
            if(A[i] == A[j]){
                A[++j] = A[i++];
                while(i<n && A[j] == A[i]) i++;
                i--;
            }else {
                A[++j]=A[i];
            }
        }
        return j+1;
    }
};
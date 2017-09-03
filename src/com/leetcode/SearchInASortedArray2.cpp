class Solution {
public:
    bool search(int A[], int n, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        for(int i =0; i< n ; i++){
            if(A[i] == tar)
            return true;
        }
        return false;
    }
};
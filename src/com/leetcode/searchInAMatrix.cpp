class Solution {
public:
    bool searchMatrix(vector<vector<int> > &mat, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = mat.size();
        if(!n) return false;
        int m = mat[0].size();
        int i = n-1;
        int j = 0;
        while(i>=0 && j <=m-1){
            if(mat[i][j] == tar) return true;
            if(mat[i][j] < tar) {
                j++;
            }else {
                i--;
            }
        }
        return false;
    }
};
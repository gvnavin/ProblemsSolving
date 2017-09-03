class Solution {
public:
    int minDistance(string word1, string word2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!word1.size()) return word2.size();
        if(!word2.size()) return word1.size();
        int sz1,sz2;
        sz1 = word1.size();
        sz2 = word2.size();
        
        int mat[sz1+1][sz2+1];
        for(int i =0;i<=sz1;i++) {
            mat[i][0] =i;
        }
        for(int i =0;i<=sz2;i++) {
            mat[0][i] =i;
        }
        for(int i =1 ; i<=sz1 ; i++) {
            for(int j =1; j<=sz2; j++) {
                if(word1[i-1]==word2[j-1]){
                    mat[i][j] = mat[i-1][j-1];
                }else {
                    int min = mat[i-1][j]>mat[i][j-1]?mat[i][j-1]:mat[i-1][j];
                    min = min > mat[i-1][j-1] ? mat[i-1][j-1] : min;
                    min+=1;
                    mat[i][j] = min;
                }
            }
        }
        return mat[sz1][sz2];
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int> > &mat) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool r,c;
        r =c = false;
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<m;i++){
            if(mat[0][i] == 0) 
            { r = true;
              break;
            }
        }
        
        for(int i=0;i<n;i++) {
            if(mat[i][0] == 0){
                c = true;
                break;
            }
        }
        
        for(int i = 1; i <n; i++){
            for(int j =1; j<m;j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        
        for(int i=1;i<n;i++){
            if(mat[i][0] == 0){
                for(int j =0;j<m;j++)
                mat[i][j] =0;
            }
        }
        
        for(int i=1;i<m;i++){
            if(mat[0][i]==0){
                for(int j =0;j<n;j++)
                mat[j][i]=0;
            }
        }
        if(r) for(int i=0;i<m;i++) mat[0][i]=0;
        if(c) for(int i =0;i<n;i++) mat[i][0]=0;
    }
};
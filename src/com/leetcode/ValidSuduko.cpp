class Solution {
public:
    int getBlock(int i,int j){
        int r = (i)/3;
        int c = (j)/3;
        return (r)*3 + c  ;
    }
    bool isValidSudoku(vector<vector<char> > &brd) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int row[9],col[9],block[9];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(block,0,sizeof(block));
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(brd[i][j] != '.'){
                    int x = brd[i][j] - '0';
                    if(row[i] & (1<<x)) return false;
                        row[i]|=1<<x;
                    if(col[j] & (1<<x)) return false;
                       col[j]|=1<<x;
                    if(block[getBlock(i,j)] & (1<<x)) return false;
                       block[getBlock(i,j)]|=1<<x;
                }
            }
        }
        return true;
    }
};
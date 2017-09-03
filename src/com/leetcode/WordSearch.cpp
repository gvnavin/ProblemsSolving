class Solution {
public:
    bool exist(vector<vector<char> > &brd, string word) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!word.length()) return true;
        vector<vector<bool> > dp;
        int n, m;
        n  = brd.size();
        m = brd[0].size();
        vector<bool> temp(m,true);
        for(int i =0; i <n;i++)
        dp.push_back(temp);
        for(int i =0; i < n; i++){
            for(int j=0;j<m;j++){
                if(brd[i][j] == word[0]){
                    dp[i][j] = false;
                    if(helper(dp,brd,word,1,i,j,n,m)) return true;
                    dp[i][j] = true;
                }
            }
        }
        return false;
    }
    
    bool helper(vector<vector<bool> >& mat,vector<vector<char> > &brd, string & word,int ind,int x, int y, int n, int m){
        if(word.length() == ind) return true;
        
        if(x+1 < n&& mat[x+1][y] && brd[x+1][y] == word[ind]){
            mat[x+1][y]= false;
            if(helper(mat,brd,word,ind+1,x+1,y,n,m))return true;
            mat[x+1][y] = true;
        }
        if(y+1 < m&& mat[x][y+1] && brd[x][y+1] == word[ind]){
            mat[x][y+1]= false;
            if(helper(mat,brd,word,ind+1,x,y+1,n,m)) return true;
            mat[x][y+1] = true;
        }
        if(x-1>=0&& mat[x-1][y] && brd[x-1][y] == word[ind]){
            mat[x-1][y]= false;
            if(helper(mat,brd,word,ind+1,x-1,y,n,m)) return true;
            mat[x-1][y] = true;
        }
        if(y-1 >= 0&& mat[x][y-1] && brd[x][y-1] == word[ind]){
            mat[x][y-1]= false;
            if(helper(mat,brd,word,ind+1,x,y-1,n,m))return true;
            mat[x][y-1] = true;
        }
        return false;
    }
};
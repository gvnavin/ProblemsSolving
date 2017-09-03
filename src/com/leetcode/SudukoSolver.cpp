class Solution {
public:
    void solveSudoku(vector<vector<char> > &brd) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        helper(brd,0,0);
    }
    
    pair<int,int> getStart(int n ,int m){
        int r = n/3;
        int c = m/3;
        return pair<int,int>(r*3,c*3);   
    }
    
    bool isValid(vector<vector<char> > &brd, int n, int m){
        for(int i =0; i <9; i++){
            if(i!=m &&brd[n][i] == brd[n][m]) return false;
        }
        for(int i=0; i<9; i++) {
            if(i!=n &&brd[i][m] == brd[n][m]) return false;
        }
        pair<int,int> p = getStart(n,m);
        for(int i =p.first; i<p.first+3;i++){
            for(int j= p.second; j <p.second +3; j++){
                if(i==n&&j==m);
                else if(brd[i][j] == brd[n][m]) return false;
            }
        }
        
        return true;
    }
    
    pair<int,int> getNext(int n,int m){
        if(m<8) return pair<int,int>(n,m+1);
        return pair<int,int>(n+1,0);
    }
    
    bool helper(vector<vector<char> > &brd,int n,int m){
        if(brd[n][m] != '.'){
            if(n==8 && m==8) return true;
            pair<int,int> next = getNext(n,m);
            return helper(brd,next.first,next.second);
        }
        for(brd[n][m] = '1' ; brd[n][m] <='9'; brd[n][m]++){
                pair<int,int> next = getNext(n,m);
                 if(isValid(brd,n,m)){
                     if(n==8 && m==8) return true;
                     else {
                        if(helper(brd,next.first,next.second)) return true;
                     }
                 }
         }
         brd[n][m] = '.';
        return false;
    }
};
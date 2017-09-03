
class Solution {
public:
    int numDistinct(string S, string T) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int **row = new int*[S.length()]; 
        for(int  i =0; i< S.length() ; i++){
            row[i] = new int[T.length()];
            memset(row[i],-1,sizeof(int)*T.length());
        }
        
        return helper(S,T,0,0,row);
    }
    
    int helper(string &S, string &T, int ss, int st,int **row){
        if(st == T.length()) return 1;
        if(ss >= S.length()) return 0;
        int &ret = row[ss][st];
        if(ret !=-1) return ret;
        ret =0;
        ret +=helper(S,T,ss+1,st,row);
        if(S[ss] == T[st]){
            ret += helper(S,T,ss+1,st+1,row);
        }
        return ret;
    }
};
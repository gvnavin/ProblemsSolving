class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() functionu
        if(!s&&!p) return true;
        if(!s || !p) return false;
        int len1, len2;
        len1 = strlen(s);
        len2 = strlen(p);
        int **arr = new int*[len1+1];
        
        for(int i =0; i<len1+1; i++){
            arr[i] = new int[len2+1];
            memset(arr[i],-1,sizeof(int)*(len2+1));
        }
        
        return helper(s,p,0,0,len1,len2,arr);
    }
    
     int helper(const char *s, const char *p,int i,int j, int n, int m,int **arr){
         if(i==n && j == m) return 1;
         if(i >n || j >m) return 0;
         int &ret = arr[i][j];
         if(ret!=-1) return ret;
         ret  = 0;
         if(s[i] == p[j]||p[j] == '?'){
             if(helper(s,p,i+1,j+1,n,m,arr)) return ret = 1;
         }else if (p[j] == '*'){
             for(int k = i ; k <= n; k++){
                 if(helper(s,p,k,j+1,n,m,arr)) return ret = 1;
             }
         }
        return ret = 0;         
     }
};
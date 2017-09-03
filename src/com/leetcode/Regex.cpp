class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        if(!s && !p) return true;
        if(!s || !p ) return false;
        int len1 = strlen(s);
        int len2 = strlen(p);
        
        int **arr = new int*[len1+1];
        for(int i =0; i <=len1; i++){
            arr[i] = new int[len2+1];
            memset(arr[i],-1,sizeof(int)*(len2 +1));
        }
        
        int ret = helper(s,p,0,0,len1,len2,arr);
        return ret;
    }
    
    int helper(const char *s, const char *p, int a, int b, int len1, int len2, int **arr){
        if(a == len1 && b == len2) return true;
        if(a > len1 || b > len2) return false;
        
        int &ret = arr[a][b];
        if(ret !=-1) return ret;
        ret = 0;
        if(p[b+1] != '*' && p[b+1] != '?' && p[b+1] != '+' ){
            if(s[a] == p[b] || (p[b] == '.' && s[a] != 0 )) return helper(s,p,a+1,b+1,len1,len2,arr);
        }else if(p[b+1] == '*'){
            while(s[a] == p[b] || (p[b] == '.' && s[a] != 0 )){
                if(helper(s,p,a,b+2,len1,len2,arr)) return 1;
                a++;
            }
            return helper(s,p,a,b+2,len1,len2,arr) ;
        }else if(p[b+1] == '+'){
            if(s[a] == p[b] || (p[b] == '.' && s[a] != 0 )){
              while(s[a] == p[b] || (p[b] == '.' && s[a] != 0 )){
                if(helper(s,p,a,b+2,len1,len2,arr)) return 1;
                a++;
                }
                return helper(s,p,a,b+2,len1,len2,arr) ;
                
            }else {
                return ret = 0;
            }
        }else if(p[b+1] == '?') {
            if(s[a] == p[b] || (p[b] == '.' && s[a] != 0 ))
            ret = helper(s,p,a+1,b+2,len1,len2,arr) ;
            ret += helper(s,p,a,b+2,len1,len2,arr) ;
            return ret;
        }
        
        return ret = 0;
    }
};
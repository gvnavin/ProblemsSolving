class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool astrik = false;
        if(*s==0){
            while(*p != 0 && *p == '*') p++;
            if(*p ==0) return true;
            else return false;
        }
        
        if(*p == 0) return false;
        
        while(*p!=0 && *s!=0 && *p!= '*')
            if(*p == *s || *p == '?') p++,s++;
            else return false;
            
        while (*p!=0){
            if(*p == '*'){
                ++p;
                astrik = true;
                continue;
            }
            const char * a,*b;
                a = p; b = s ;
                   while(*s !=0 && *p!=0 && *p != '*')
                     if(*s==*p || *p == '?') ++p,++s;
                     else s = ++b , p = a;
              if(*s == 0) return isMatch(s,p);          
        }
        if(*s!=0){
            if(!astrik) return false;
            if(*(--p) == '*') return true;
            while(*(s+1)!=0) s++;
            while(*p!='*' && (*p==*s || * p == '?') ) p--,s--;
            if(*p == '*') return true;
            else return false;
        }
        
        return true;
    }
};
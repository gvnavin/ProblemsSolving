
class Solution {
public:
    bool isNumber(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool num =false;
        bool dot = false;
        bool ex = false;
        bool sp = false;
        while(*s == ' ') s++;
        if(*s == '+' || *s == '-') s++;
        while(*s != 0){
            if(*s == ' ') sp = true;
            else if(sp) return false;
            else if(*s >= '0' && *s <= '9'){
                 num = true;
            }else if(*s == '.'){
                if(dot||ex) return false;
                dot = true;
            }else if(*s == 'e' || *s == 'E'){
                if(ex || !num) return false;
                ex = true;
                num =false;
            }else if(*s == '+' || *s== '-'){
                if(!(*(s-1)== 'e' || *(s-1)=='E')) return false;	
            }
            else {
                return false;
            }
            s++;
        }
        
        return num;
    }
};
class Solution {
public:
    int state;
    bool st;
    void trans(char c) {
        if(state == 0){
            if(c>='0' && c<='9') state = 2;
            else if(c == '+' || c== '-') state = 1;
            else if(c == '.') state = 3;
            else state = 10;
        }else if(state == 1) {
            if(c>='0' && c<='9') state = 2;
            else if(c == '.') state = 3;
            else state = 10;
        }else if(state == 2) {
            if(c>='0' && c<='9') state = 2;
            else if(c == '.') state = 4;
            else if(c == 'e' || c== 'E') state = 5;
            else state = 10;
        }else if(state ==3) {
            if(c>='0' && c<='9') state = 4;
            else state = 10;
        }else if(state == 4) {
            if(c>='0' && c<='9') state = 4;
            else if(!st && c == 'e' || c== 'E') state = 5;
            else state = 10;          
        }else if(state == 5) {
            st = true;
            if(c>='0' && c<='9') state = 4;
            else if(c == '+' || c== '-') state = 6;
            else state = 10;
        }else if(state == 6) {
            if(c>='0' && c<='9') state = 4;
            else state = 10;
        }else {
            state = 10;
        }
    }
    
    bool isNumber(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!str) return false;
        int len = strlen(str);
        int i =0;
        int j = len -1;
        while(str[i] == ' ') i++;
        while(str[j] == ' ') j--;
        state = 0;
        st = false;
        for(int  k = i ; k <=j ; k++){
            trans(str[k]);
        }
        
        if(state == 2 || state == 4) return true;
        return false;
    }
};
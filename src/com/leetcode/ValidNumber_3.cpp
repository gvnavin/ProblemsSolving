class Solution {
public:
    int state;
    bool st;
    
    void trans(char c) {
        switch(state) {
        case 0 : 
                if(c == '+' || c == '-') state = 1;
                else if(c >= '0' && c <= '9') state = 2;
                else if(c == '.') state = 3;
                else state = 100;
                break;
         case 1: if(c >= '0' && c <= '9') state = 2;
                else if(c == '.') state = 3;
                else state = 100;
                break;
         case 2 : if(c >= '0' && c <= '9') state = 2;
                  else if(c == '.') state = 5;
                  else if(c == 'e' || c == 'E') state = 4;
                  else state = 100;
                  break;
         case 3 : if(c >= '0' && c <= '9') state = 5;
                  else state  = 100;
                  break;
         case 4 : st = true; 
                if(c >= '0' && c <= '9') state = 5;
                  else if(c == '+' || c == '-') state = 5;
                  else state = 100;
                  break;
         case 5 :  
                if(c >= '0' && c <= '9') state = 5;
                else if(!st && (c == 'e' || c == 'E')) state = 4;
                else state = 100;
                break;
        }
    }
    
    bool isNumber(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        state = 0;
        st = false;
        int len = strlen(s);
        int i =0;
        int j = len -1;
        //while(i < len && s[i] == ' ') i++;
        //while(j >=0 && s[j] == ' ') j--;
        while(s[i] == ' ') i++;
        while(s[j] == ' ') j--;
        for(int k =i; k <=j ; k++){
            trans(s[k]);
        }
        
        if(state == 2 || state == 5 ) return true;
        else return false;
        
    }
};
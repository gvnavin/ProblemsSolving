class Solution {
public:
    char *strStr(char *hay, char *ned) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(*ned == 0) return hay;
        int len2 = strlen(ned);
        int len1 = strlen(hay);
        int F[len2];
        computeFailureFunction(ned,F,len2);
        int j = -1;
        for(int i =0; i <len1 ; i++) {
            while(j> -1 && ned[j+1]!=hay[i]) j = F[j];
            if(ned[j+1] == hay[i]) j++;
            if(j == len2-1)
            return hay + i - (len2 -1);
        }
        return NULL;
    }
    
    void computeFailureFunction(char * ned, int F[],int len) {
        int j = -1;
        F[0] = -1;
        for(int i=1; i<len; i++) {
            while(j>-1 && ned[i]!=ned[j+1]) j = F[j];
            if(ned[j+1] == ned[i]) j++;
            F[i] = j;
        }
    }
    
    
    
    
};
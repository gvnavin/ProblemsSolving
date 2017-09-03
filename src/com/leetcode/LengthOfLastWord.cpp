class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

        int ans = 0;
        int len = strlen(s);
        if(!len) return 0;
        
        bool st  =false;
        int p1;
        for(int i =0; i < len; i++) {
            if(s[i] == ' ') {
                if(st) {
                    ans = i -p1;     
                }
                st = false;
            }else if(!st) {
                st = true;
                p1 = i;
            }
        }
        if(s[len -1] !=' ') return len - p1;
        return ans;
    }
};
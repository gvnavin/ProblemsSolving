class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans = 0;
        bool st = false;
        int len = strlen(s);
        for(int i = 0; i < len ; i++) {
            if(isalpha(s[i])){
                if(!st){
                    ans = 1;
                }
                else {
                    ans++;
                }
                st = true;
            }else {
                st = false;
            }
        }
     return ans;
    }
};
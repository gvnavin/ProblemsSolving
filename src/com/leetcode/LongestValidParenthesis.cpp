class Solution {
public:
    int longestValidParentheses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans =0;
        int count = 0;
        int temp =0;
        for(int i =0;i<s.length() ;i++) {
            if(s[i] == '(') {
             count ++;
             temp++;
            }
            else count--;
            if(count == 0) ans = max(ans,temp);
            if(count < 0) { temp = 0; count = 0; }
        }
        count = temp = 0;
        for(int i = s.length() -1; i>=0; i--) {
            if(s[i] == ')' ) {
                count ++;
                temp++;
            }else {
                count --;
            }
            if(count == 0) ans = max(ans,temp);
            if(count < 0) { temp = 0; count = 0; }
        }
        
        return 2*ans;
    }
};
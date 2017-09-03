class Solution {
public:
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = s.length();

        stack<char> stk;
        for(int i =0; i <len ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stk.push(s[i]);
            else {
                if(stk.size() && ((stk.top() == '(' && s[i] == ')') || (stk.top() == '{' && s[i] == '}')|| (stk.top() == '[' && s[i] == ']'))){
                    stk.pop();
                }else {
                    return false;
                }
            }
        }
        if(stk.size()) return false;
        return true;
    }
};
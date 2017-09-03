class Solution {
public:
    string convert(string s, int r) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(r<=1) return s;
        
        string ans(s.length(),'0');
        int c,m,e;
        c=0;
        for(int i=0;i<s.length(); i+=2*(r-1))
            ans[c++] = s[i];
    
        for(int i =1; i<r-1; i++){
            for(int j = i; j<s.length(); j+=2*(r-1)){
                ans[c++] = s[j];
                int k = 2*(r-i-1) +j;
                if(k<s.length())
                ans[c++] = s[k];
            }
        }
        
        for(int i = r-1; i<s.length(); i+=2*(r-1)){
            ans[c++] = s[i];
        }
        return ans;
    }
};
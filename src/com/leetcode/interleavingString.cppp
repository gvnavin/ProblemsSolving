class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(s1.length() + s2.length() != s3.length()) return false;
        return helper(s1,0,s2,0,s3,0);    
    }
    
    bool helper(string &s1, int l1, string &s2, int l2, string &s3 ,int l3) {
        if(l1 == s1.length() && l2 == s2.length() && l3 == s3.length()) return true;
        
        if(s1[l1] == s3[l3]) {
            bool st = helper(s1,l1+1,s2,l2,s3,l3+1);
            if(st) return true;
        }
        
        if(s2[l2] == s3[l3]) {
            if(helper(s1,l1,s2,l2+1,s3,l3+1))
            return true;
        }
        
        return false;
    }
};
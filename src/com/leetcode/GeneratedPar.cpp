class Solution {
public:
    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> ans;
        if(!n) return ans;
        helper(ans,n,n,"");
        return ans;
    }
    
    void helper(vector<string>&ans,int n , int m, string str) {
        if(n==0 && m ==0) {
            ans.push_back(str);
            return ;
        }
        if(n < m)
            helper(ans,n,m-1,str+")");
        if(n>0)
            helper(ans,n-1,m,str+"(");
    }
    
};
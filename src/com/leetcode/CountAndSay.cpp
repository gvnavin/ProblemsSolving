class Solution {
public:
    string countAndSay(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==1) return "1";
        string ans = "1";
        for(int j =2 ;j <=n ;j++) {
            stringstream ss;
            for(int i=0; i<ans.length(); i++) {
                int count =1;
                while(i+1 < ans.length() && ans[i+1] == ans[i]) { count++; i++; }
                 ss << count;
                ss << ans[i];
            }
            ans = ss.str();
        }
        return ans;
    }
};
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> ans;
        if(!s.length()) return ans;
        helper(0,s.length(),3,ans,s,"");
        return ans;
    }
    
    
    void helper(int ind,int len, int n, vector<string> & ans,string &s,string curr){
        if(n==0){
            string str = s.substr(ind,len -ind);
            if(!valid(str)) return ;
            ans.push_back(curr+str);
            return ;
        }
        string str;
        for(int i = ind ; i<ind+3 && i < len ; i++){
            str = s.substr(ind,i+1-ind);
            if(valid(str)){
                helper(i+1,len,n-1,ans,s,curr + str + ".");
            }
        }
    }
    
    
    bool valid(string str) {
        int len = str.length();
        if(!len) return false;
        if(len>1 && str[0] == '0') return false;
        int num  =0;
        for(int i =0; i<len ;i++){
            num*=10;
            num+=str[i]-48;
            if(num>255)return false;
        }
        return true;
    }
};
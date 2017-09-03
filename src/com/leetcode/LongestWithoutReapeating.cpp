class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(s.length()<=1) return s.length();

        vector<bool> arr(256,false);
        int start , end, ts, te,len,tl;
        len = 1;
        ts = 0;
        te = 0;
            for(int  i = 0; i< s.length(); i++) {
                if(arr[s[i]]){
                    while(s[i]!=s[ts]){
                        arr[s[ts]]=false;
                        ts++;
                    }
                    ts++;
                }else {
                    arr[s[i]] = true;
                }
                te = i;
            if(te-ts+1> len){
                len = te -ts +1;
                    }
            }
        return len;
    }
};

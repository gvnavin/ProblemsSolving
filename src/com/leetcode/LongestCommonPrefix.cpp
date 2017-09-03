class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!strs.size()) return "";
        int size = INT_MAX;
        for(int i=0;i<strs.size();i++){
            int len = strs[i].length();
            size = min(len,size);
        }

        if(!size) return "";

        int k=0;
        for(int i =0; i <size;i++) {
            char c = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c) return strs[0].substr(0,i);
            }
        }
        return strs[0].substr(0,size);
    }
};

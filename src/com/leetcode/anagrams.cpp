class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<string,vector<string> > Map;
        vector<string> ans;
        for(int  i =0 ;i < strs.size() ; i++) {
            string s = strs[i];
            sort(s.begin(),s.end());
            Map[s].push_back(strs[i]);
        }
        map<string,vector<string> > :: iterator it = Map.begin();
        while(it != Map.end()) {
            vector<string> temp = it->second;
            if(temp.size() > 1){
                for(int i =0; i< temp.size() ; i++) {
                    ans.push_back(temp[i]);
                }
            }
            it++;
        }
        return ans;
    }
};
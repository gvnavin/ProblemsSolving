class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<string,int> Map;
        vector<int> ans;
        int mx = 0;
        int tot =0;
        int len = S.length();
        if(!len) return ans;
        for(int i=0;i<L.size();i++){
            Map[L[i]] +=1;
            mx = L[i].length();
            tot+=L[i].length();
          }
        for(int i =0; i<len ; i++){
            if(len - i < tot) return ans;

            int k = i;
            int j = 0;
    		map<string,int> temp;
            for(j = 0; j < L.size() ; j++){
                string sub = S.substr(k,mx);
                if(Map[sub]> temp[sub]){
                    temp[sub]++;
                }else {
                    break;
                }
                k+=mx;
            }
            if(j==L.size()) ans.push_back(i);
        }
      return ans;
    }
};

class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> >ans;
        helper(num,0,ans);
        return ans;
    }
    
    void helper(vector<int> &num, int ind, vector<vector<int> > &ans ){
        if(ind == num.size()){
            ans.push_back(num);
            return ;
        }
        map<int,int> Map;
        for(int i = ind ; i < num.size(); i++){
            if(Map.find(num[i])==Map.end()){
                Map[num[i]] = num[ind];
                swap(num[i],num[ind]);
                helper(num,ind+1,ans);
                swap(num[i],num[ind]);
            }
        }
    }
};
class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        int sz = num.size();
        helper(num,0,sz,ans);
        return ans;
    }
    
    void helper(vector<int> &num, int s,int e,vector<vector<int> > &ans ){
        if(s==e){
            ans.push_back(num);
            return ;
        }
        for(int i = s ; i < e; i++){
            swap(num[s],num[i]);
            helper(num,s+1,e,ans);
            swap(num[s],num[i]);
        }
    }
};
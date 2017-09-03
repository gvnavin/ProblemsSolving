class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        int sz = num.size();
        sort(num.begin(),num.end());
        helper(num,0,sz,ans);
        return ans;
    }
    
    void helper(vector<int> &num, int s,int e,vector<vector<int> > &ans ){
        if(s==e){
            ans.push_back(num);
            return ;
        }
        int x = s;
        while(x <e && num[x]==num[s]) x++;
        for(int i = x -1 ; i < e; i++){
            swap(num[s],num[i]);
            helper(num,x,e,ans);
            swap(num[s],num[i]);
        }
    }
};
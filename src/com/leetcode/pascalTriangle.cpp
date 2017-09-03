class Solution {
public:
    vector<vector<int> > generate(int r) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans ;
        if(!r) return ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
    
        for(int i =1; i<r ;i++ ){
            temp.resize(i+1);
            temp[0]=temp[i]=1;
            for(int j=1;j<i;j++){
                temp[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};
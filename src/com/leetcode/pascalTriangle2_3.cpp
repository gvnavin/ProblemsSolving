class Solution {
public:
    vector<int> getRow(int row) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int>ans;
        ans.push_back(1);
        for(int i =1 ; i<=row; i++ ){
            int a = (row - i + 1);
            long long x = (long long) ans[i-1] * a / i;
            ans.push_back(x);
        }
        return ans;
    }
};
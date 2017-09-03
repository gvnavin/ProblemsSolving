class Solution {
public:
    int getNum(int n, int r){
        if(r==0 || r ==n) return 1;
        return (long long)n*getNum(n-1,r-1)/r;
    }
    vector<int> getRow(int row) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ans;
        row++;
        ans.resize(row);
        for(int i=0; i<row; i++){
            ans[i] = getNum(row-1,i);
        }
        return ans;
    }
};
class Solution {
public:
    int getNum(int n, int r){
        if(r==0 || r ==n) return 1;
        long long  ans = 1;
        int div = 1;
        for(int i = n -r +1 ; i <=n; i++){
            ans *= i;
            ans/=div;
            div++;
        }
        
        return ans;
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
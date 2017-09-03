class Solution {
public:
    int maxProfit(vector<int> &pri) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans = 0;
        int len = pri.size();
        if(!len) return ans;
        int leftProfit[len];
        int rightProfit[len];
        rightProfit[len -1] = leftProfit[0] = 0;
        int min = pri[0];
        int maxi = pri[len -1];
        for(int i = 1 ; i < len; i++){
            leftProfit[i] = max(pri[i] - min,leftProfit[i-1]);
            if(min > pri[i]) min = pri[i];
            rightProfit[len-1-i] = max(maxi - pri[len-1-i] ,rightProfit[len -i]);
            if(maxi < pri[len -1 -i]) maxi = pri[len -1 -i];
        }
        
        for(int i =0; i < len; i++)
            ans = max(ans,leftProfit[i] + rightProfit[i]);
        return ans;
        
    }
};
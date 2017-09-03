class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans =0;
        int sz =  prices.size();
        if(sz<=1) return ans;
        for(int i =1; i<sz; i++) {
            if(prices[i] > prices[i-1])
            ans+=(prices[i]-prices[i-1]);
        }
        
        return ans;
    }
};
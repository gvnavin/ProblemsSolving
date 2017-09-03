class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!prices.size()) return 0;
        int min = prices[0];
        int ans =0;
        for(int i =1; i <prices.size() ;i++) {
            if(prices[i] - min > ans) {
                ans = prices[i] -min;
            }
            if(prices[i] < min) {
                min = prices[i];
            }
        }
        return ans;
    }
};
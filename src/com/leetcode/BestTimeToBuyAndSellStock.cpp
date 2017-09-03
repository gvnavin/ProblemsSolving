/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        
		if (prices.empty()) return 0;

		int prefixMinimum = prices[0];
		int output = 0;
		for (int i=1; i<prices.size(); ++i) {
			output = max(prices[i]-prefixMinimum,output);
			prefixMinimum = min(prefixMinimum,prices[i]);
		}
		return output;
    }
};*/
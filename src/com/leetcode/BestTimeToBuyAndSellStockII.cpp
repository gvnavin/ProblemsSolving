/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        
		if (prices.empty()) return 0;

		int profit = 0;
		for (int i=prices.size()-2; i>=0; --i) {
			if (prices[i+1] - prices[i] > 0) {
				profit += (prices[i+1] - prices[i]);
			}
		}
		return profit;
    }
};

int main() {
	int pr[] = {2,1,4,5,2,9,7};
	vector<int> prices(pr, pr+sizeof(pr)/sizeof(int));
	int output = Solution().maxProfit(prices);
	system("pause");
}*/
/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {

		if (prices.empty()) return 0;

		int profit = 0;
		int highest = 0;
		int secondHighest = 0;
		for (int i=prices.size()-2; i>=0; --i) {
			if (prices[i+1] - prices[i] > 0) {
				profit += (prices[i+1] - prices[i]);
			} else {
				if (profit > highest) {
					secondHighest = highest;
					highest = profit;
				}
				else if (profit > secondHighest) {
					secondHighest = profit;
				}
				profit = 0;
			}
		}
		if (prices[1] - prices[0] > 0) {
			if (profit >= highest) {
				secondHighest = highest;
				highest = profit;
			}
		}
		return highest + secondHighest;
    }
};

int main() {
	int pr[] = {1,2,4,2,5,7,2,4,9,0};
	vector<int> prices(pr, pr+sizeof(pr)/sizeof(int));
	int output = Solution().maxProfit(prices);
	system("pause");
}*/
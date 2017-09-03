/*
#include <iostream>

using namespace std;

class Solution {
public:
	int maximumMoney(int *coins, int count) {
		return maximumMoneyHelper(coins, 0, count-1);
	}

	int maximumMoneyHelper(int *coins, int start, int end) {

		if (start > end) return 0;

		int option1 = coins[start] + min(maximumMoneyHelper(coins, start+2, end),
			maximumMoneyHelper(coins, start+1, end-1)); 
		int option2 = coins[end] + min(maximumMoneyHelper(coins, start+1, end-1),
			maximumMoneyHelper(coins, start, end-2));
		return max(option1, option2);
	}
};

int main() {
	int coinsArray[] = { 3, 2, 2, 3, 1, 2 };
	int output = Solution().maximumMoney(coinsArray, sizeof(coinsArray)/sizeof(int));
	system("pause");
}*/


// Cracking the coding interview
// Problem 9.8
/*
#include <iostream>
class Solution {

private:
	int getNoOfWaysHelper(int n, int currentDenomination) {

		int nextDenomination = 0;
		switch (currentDenomination) {
		case 25:
			nextDenomination = 10;
			break;
		case 10:
			nextDenomination = 5;
			break;
		case 5:
			nextDenomination = 1;
			break;
		case 1:
			return 1;
			break;
		}

		int ways = 0;
		for (int i=0; i*currentDenomination <= n; ++i) {
			int output = getNoOfWaysHelper(n - (i*currentDenomination), nextDenomination);
			if (output != -1) { 
				ways += output;
			}
		}
		return ways;
	}

public:
	int getNoOfWays(int n) {
		return getNoOfWaysHelper(n, 25);
	}
};

int main() {
	int output = Solution().getNoOfWays(31);
	std::cout << output;
	system("pause");
}*/
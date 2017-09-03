/*
// -http://people.csail.mit.edu/bdean/6.046/dp/

#include <iostream>
using namespace std;

class Solution {
public:
	int maximumMoney(int coins[], int n) {
		return maximumMoneyHelper(coins, n, 0, n-1);
	}

	int maximumMoneyHelper(int coins[], int n, int left, int right) {
		
		if ((right-left+1) == 1) {
			return coins[right];
		}

		if ((right-left+1) == 2) {
			return max(coins[right],coins[left]);
		}
		int option1 = coins[left] + maximumMoneyHelper(coins, n, left+2, right);
		int option2 = coins[left] + maximumMoneyHelper(coins, n, left+1, right-1);
		int option3 = coins[right] + maximumMoneyHelper(coins, n, left+1, right-1);
		int option4 = coins[right] + maximumMoneyHelper(coins, n, left, right-2);
		return max(max(max(option1, option2), option3), option4);
	} 
};

int main() {
	int coins[] = {5,1,100,3,10};
	cout << Solution().maximumMoney(coins, 5);
	system("pause");
}*/
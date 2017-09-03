/*
#include <iostream>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        
		if (n <= 1) return 1;

		int sum = 0;
		for (int root = 1; root<=n; root++) {

			int left = numTrees(root-1);
			int right = numTrees(n-root);

			sum += left* right;
		}
		return sum;
    }
};

int main() {
	cout << Solution().numTrees(3);
	system("pause");
}*/
/*
#include <iostream>
using namespace std;

class Solution {
public:
    double pow(double x, int n) {
        
		if (n == 0) return 1;
		if (n == 1) return x;

		int nAbs = abs(n);
		double result = -1;
		if (nAbs % 2 == 0) {
			result = pow(x, nAbs/2);
			result *= result;
		}
		else {
			result = pow(x, nAbs/2);
			result *= result;
			result *= x;
		}
		if (n < 0) {
			return 1/result;
		}
		return result;
    }
};

int main() {
	Solution().pow(50.31429,-3);
}*/
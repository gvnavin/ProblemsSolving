/*
#include <iostream>
using namespace std;


class Solution {
public:
    double sqrt(double x) {
        
    	if (x == 0) return 0;
		if (x == 1) return 1;
		double low = (x < 1) ? double(x) : 1.0;
		double high = (x < 1) ? 1.0 : double(x);
		while (high - low > 0.00000000001) {
			double mid = low + (high - low)/2.0;
			double midSquared = mid*mid;
			if (midSquared == double(x)) {
				return mid;
			}
			else if (midSquared < double(x)) {
				low = mid;
			}
			else {
				high = mid;
			}
		}
		return low+(high-low)/2;
    }
};


int main() {
	std::cout << Solution().sqrt(.64);
	system("pause");
}*/
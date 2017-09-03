/*
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
		
		long long int signDividend = dividend < 0 ? -1ll : 1ll;
		long long int signDivisor = divisor < 0 ? -1ll : 1ll;
		long long int uDividend = abs(long long int(dividend));
		long long int uDivisor = abs(long long int(divisor));

		long long int low = 0;
		long long int high = uDividend;

		while (high - low > 1) {
			long long int mid = low + ((high-low) >> 1);
			long long int midTimesDivisor = multiply(mid, uDivisor);
			if (midTimesDivisor == uDividend) {
				return mid * signDividend / signDivisor;
			}
			else if (midTimesDivisor < uDividend) {
				low = mid;
			}
			else {
				high = mid;
			}
		}
		return (low + ((high-low) >> 1)) * signDividend / signDivisor;
    }

	long long int multiply(long long int a, long long int b) {

		string binaryB = binary(b);
		long long int output = 0;
		long long int shift = 0;
		for (int i=binaryB.size()-1; i>=0; --i) {
			char binaryBit = binaryB[i]-'0';
			if (binaryBit) {
				output += (a << shift);
			}
			++shift;
		}
		return output;
	}

	string binary(long long int num) {
		int n = (log(double(num))/log(double(2))) + 1 + 1;
		char * output = new char[n];
		output[--n] = '\0';
		while (num > 0) {
			output[--n] = (num%2) + '0';
			num /= 2;
		}
		return string(output);
	}
};


int main() {
	cout << Solution().divide(-2147483648,2);
	system("pause");
}*/
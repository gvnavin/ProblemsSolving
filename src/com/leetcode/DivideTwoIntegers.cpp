/*
#include <iostream>
using namespace std;

class Solution {
public:
    int divide(long long dividend, long long divisor) {
        
    	if (divisor == 0) return INT_MAX;
		long long low = 0ll;
		long long high = dividend;
		int signDividend = 1;
		int signDivisor = 1;
		if (dividend < 0) {
			high *= -1ll;
			dividend *= -1ll;
			signDividend = -1;
		}
		if (divisor < 0) {
			divisor *= -1ll;
			signDivisor = -1;
		}
		while (low < high) {
			long long mid = low + (high-low+1ll)/2ll;
			long long midTimesDivisor = multiply(mid,divisor);
			if (midTimesDivisor == dividend) return mid*signDividend/signDivisor;
			else if (midTimesDivisor < dividend) {
				low = mid;
			} else {
				high = mid-1;
			}
		}
		return low*signDividend/signDivisor;
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
	cout << Solution().divide(-2147483648ll, 1);
	system("pause");
}*/
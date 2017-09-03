/*
#include <iostream>
using namespace std;

class MathUtils {
public:
	static double log2(double value) {

		double high = 0;
		while ((1 << (int)high) < value) {
			++high;
		}
		double low = high-1;
		while (high - low > 1e-7) {
			double mid = low + (high-low)/2;
			double twoRaisedToMid = pow(2, mid);
			if (twoRaisedToMid < value) {
				low = mid;
			} else {
				high = mid;
			}
		}
		return low;
	}
};

int main() {
	double output = MathUtils::log2(3)-MathUtils::log2(10);
	system("pause");
}*/

/*
#include <iostream>
class MathUtils {
public:
	static double log2(double value) {

		double high = 0;
		while ((1 << (int)high) < value) {
			++high;
		}
		double low = high-1;
		double lowValue = 1 << int(low);
		double highValue = 1 << int(high);
		while (high - low > 1e-7) {

			double mid = low + (high-low)/2;
			double valueSquareRoot = sqrt(lowValue * highValue);
			if (valueSquareRoot > value) {
				high = mid;
				highValue = valueSquareRoot;
			} else {
				low = mid;
				lowValue = valueSquareRoot;
			}
		}
		return low;
	}
};

int main() {
	double output = MathUtils::log2(25);
	double output1 = MathUtils::log2(10);
	double output2 = MathUtils::log2(9)-MathUtils::log2(100);
	double output3 = MathUtils::log2(9);
	system("pause");
}*/
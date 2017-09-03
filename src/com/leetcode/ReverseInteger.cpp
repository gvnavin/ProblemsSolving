/*
#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        
		int output = 0;
		bool negative = x < 0 ? true : false;
		x = (x < 0) ? -x : x;
		while (x > 0) {
			output *= 10;
			output += (x%10);
			x = x/10;
		}
		return negative ? -output : output;
    }
};

int main() {
	int output = Solution().reverse(123);
	int output1 = Solution().reverse(-321);
	system("pause");
}*/
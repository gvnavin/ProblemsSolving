/*
#include <iostream>
#include <string>
using namespace std;

class Solution {

	

public:

	string multiply(string num1, string num2) {

		string output = "0";
 		for (int i=num2.size()-1; i>= 0; --i) {
			int carry = 0;
			string subOutput;
			for (int k=i; k<num2.size()-1; k++) {
				subOutput += '0';
			}
			for (int j=num1.size()-1; j>=0; j--) {
				int digit1 = (num1[j] - '0');
				int digit2 = (num2[i] - '0');
				int digitMultiply = digit1 * digit2;
				digitMultiply += carry;
				subOutput = char((digitMultiply%10) + '0') + subOutput;
				carry = (digitMultiply/10);
			}
			if (carry > 0) {
				subOutput = char(carry + '0') + subOutput;
			}
			output = add(output, subOutput);
		}
		int idx = 0;
		while (idx < output.size()-1 && output[idx] == '0') {
			++idx;
		}
		return output.substr(idx);
	}

	string add(string num1, string num2) {
		int indexNum1 = num1.size()-1;
		int indexNum2 = num2.size()-1;
		int carry = 0;
		string output;
		while (indexNum1 >= 0 || indexNum2 >= 0) {
			int currentChar = carry;
			if (indexNum1 >= 0) {
				currentChar += (num1[indexNum1] - '0');
				--indexNum1;
			}
			if (indexNum2 >= 0) {
				currentChar += (num2[indexNum2] - '0');
				--indexNum2;
			}
			carry = currentChar > 9 ? 1 : 0;
			output = char((currentChar%10) + '0') + output;
		}
		if (carry == 1) {
			output = '1' + output;
		}
		return output;
	}

	unsigned long long stringToLong(string num) {
		
		unsigned long long output = 0;
		for (int i=0; i<num.size(); i++) {
			output *= 10ll;
			output += long long(num[i] - '0');
		}
		return output;
	}
};

int main() {

	cout << Solution().multiply("55669","5566123");
	system("pause");
}*/
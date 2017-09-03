/*
#include <iostream>
#include <string>
using namespace std;

class Solution {

public:
	int convertToInt(string roman) {
		if (roman.empty()) return 0;

		string numerals = "IVXLCDM";
		int numeralValues[] = {1,5,10,50,100,500,1000};
		int ans = 0;
		char prevChar = roman.at(0);
		for (int i=1; i<roman.size(); ++i) {
			char currChar = roman.at(i);
			int prevCharIndex = numerals.find_first_of(prevChar);
			int currCharIndex = numerals.find_first_of(currChar);
			if (currCharIndex <= prevCharIndex) {
				ans += numeralValues[prevCharIndex];
			} else {
				ans -= numeralValues[prevCharIndex];
			}
			prevChar = currChar;
		}
		int prevCharIndex = numerals.find_first_of(prevChar);
		ans += numeralValues[prevCharIndex];
		return ans;
	}
};

int main() {
	cout << Solution().convertToInt("MCMXLIV") << endl;
	cout << Solution().convertToInt("MDCCCCX") << endl;
	cout << Solution().convertToInt("MCMLIV") << endl;
	cout << Solution().convertToInt("MCMXC") << endl;
	system("pause");
}*/
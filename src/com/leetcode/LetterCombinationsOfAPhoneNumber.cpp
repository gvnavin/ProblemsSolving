/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
		string phone[] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		vector<string> output;
		output.push_back("");
		for (int idx=0; idx<digits.length(); idx++) {
			string currentLetters = phone[digits[idx]-'0'];
			int outputSize = output.size();
			for (int i=0; i<outputSize; i++) {
				string prefix = output[i];
				output[i] = output[i] + string(1,currentLetters[0]);
				for (int j=1; j<currentLetters.size(); j++) {
					output.push_back(prefix + string(1,currentLetters[j]));
				}
			}
		}
		return output;
    }
};

int main() {
	vector<string> output = Solution().letterCombinations("32");
}*/
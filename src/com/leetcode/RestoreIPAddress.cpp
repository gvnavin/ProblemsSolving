/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> output;
        if (s.length() > 12) return output;
        if (s.length() < 4) return output;
    	restoreIpAddressesHelper(s, 0, 1, "", output);
		return output;
    }

	void restoreIpAddressesHelper(string s, int startIndex, int octectIndex, string previous, vector<string>& output) {
        
		if (octectIndex == 4) {
			if (startIndex == s.length()) return;
			if (s.length() - startIndex > 3) return;
			int num = getNum(s, startIndex, s.length() - 1);
			if (num > 255) return;                 
        	if (s.length() - startIndex > 1 && s[startIndex] == '0') return;
			previous += s.substr(startIndex);
			output.push_back(previous);
		}

		for (int i=startIndex; i<startIndex+3 && i<s.length(); ++i) {
			int num = getNum(s, startIndex, i);
			if (num > 255) continue;
			string next = (previous + s.substr(startIndex, i-startIndex+1) + ".");
			restoreIpAddressesHelper(s, i+1, octectIndex + 1, next, output);            
    		if (s[startIndex] == '0') return;
		}
    }

	int getNum(string s, int startIndex, int endIndex) {
		int num = 0;
		for (int i=startIndex; i<= endIndex; ++i) {
			num *= 10;
			num += (s[i]-'0');
		}
		return num;
	}
};
int main() {
	string input = "25525511135";
	vector<string> output = Solution().restoreIpAddresses(input);
	system("pause");
}*/
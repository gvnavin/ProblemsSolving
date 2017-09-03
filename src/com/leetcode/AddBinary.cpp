/*
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
		
		int outputLength = max(a.size(),b.size())+1;
		char *output = new char[outputLength+1];
		output[outputLength] = '\0';
		memset(output, 0, sizeof(char)*outputLength);
		int outputIndex = outputLength-1;
		int aIndex = a.size()-1;
		int bIndex = b.size()-1;
		int carry = 0;
		while (aIndex >=0 || bIndex >= 0 || carry == 1) {
			int currentBit = 0;
			if (aIndex >= 0) {
				currentBit += (a[aIndex] - '0');
				--aIndex;
			}
			if (bIndex >= 0) {
				currentBit += (b[bIndex] - '0');
				--bIndex;
			}
			currentBit += carry;
			carry = currentBit/2;
			currentBit = currentBit%2;
			output[outputIndex] = currentBit + '0';
			--outputIndex;
		}
		if (outputIndex == 0) output++; 
		return string(output);
    }
};

int main() {
	string a = "11";
	string b = "1";
	string output = Solution().addBinary(a,b);
}*/
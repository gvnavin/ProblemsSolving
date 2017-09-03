/*
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maximumWindowLeft = -1;
		int maximumWindowRight = -1;
		int maximumWindowLength = 0;
		int overshoot = 0;

		map<char, int> charOccurrences;
		int left = 0;
		int right = -1;
		int overshootCount = 0;
		while (left < s.length() && ++right < s.length()) {
			int &occurrences = charOccurrences[s[right]];
			if (occurrences > 0) {
				++overshootCount;
			}
			++occurrences;

			while (overshootCount > 0) {
				int &overshootOccurrences = charOccurrences[s[left]];
				if (overshootOccurrences > 1) --overshootCount;
				--overshootOccurrences;
				++left;
			}
			if (overshootCount == 0 && maximumWindowLength < (right - left + 1)) {
				maximumWindowLength = right - left + 1;
				maximumWindowLeft = left;
				maximumWindowRight = right;
			}
		}
		return maximumWindowLength;
    }
};

int main() {
	string s = "qpxrjxkitzyxacbhhkicqc";
	int length = Solution().lengthOfLongestSubstring(s);
	system("pause");
}*/
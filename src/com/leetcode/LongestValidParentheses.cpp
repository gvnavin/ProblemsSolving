/*
#include <iostream>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
		int length = 0;
		int count = 0;
		int maxValidLength = 0;
		for (int i=0; i<s.length(); ++i) {
			if (s.at(i) == '(') {
				++count;
			} else {
				--count;
			}
			++length;
			if (count == 0 && length > maxValidLength) {
				maxValidLength = length;
			}
			if (count == -1) {
				length = 0;
				count = 0;
			}
		}
		length = 0;
		count = 0;
		for (int i=s.length()-1; i>=0; --i) {
			if (s.at(i) == ')') {
				++count;
			} else {
				--count;
			}
			++length;
			if (count == 0 && length > maxValidLength) {
				maxValidLength = length;
			}
			if (count == -1) {
				length = 0;
				count = 0;
			}
		}
		return maxValidLength;
    }
};*/
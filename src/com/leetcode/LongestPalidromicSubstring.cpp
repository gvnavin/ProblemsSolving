/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        
		string processedS = preprocess(s);
		int n = processedS.length();
		int maxExpandedLength = 0;
		int maxExpandedCenter = 0;
		int* p = new int[n];
		memset(p, 0, sizeof(int)*n);
		int C = 0;
		int R = 0;
		for (int i=1; i<n; ++i) {
			p[i] = 0;
			if (R > i) {
				int pSymmetric = p[C-(i-C)];
				p[i] = min(pSymmetric, (R-i));
			}
			while ((p[i]+i+1 <n) && (i-p[i]-1 >= 0) && (processedS[p[i]+i+1] == processedS[i-p[i]-1])) {
				++p[i];
			}
			if (maxExpandedLength < p[i]) {
				maxExpandedLength = p[i];
				maxExpandedCenter = i;
			}
			if (p[i] + i > R) {
				R = i + p[i];
				C = i;
			}
		}
		
		delete[] p;
		return s.substr((maxExpandedCenter-maxExpandedLength)/2,maxExpandedLength);

    }

	string preprocess(string s) {
		int n = s.length();
		string output = "#";
		for (int i=0; i<n; ++i) {
			output += s[i];
			output += "#";
		}
		return output;
	}
};*/
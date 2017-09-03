/*
#include <iostream>
using namespace std;

class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        
		int n = strlen(haystack);
		int m = strlen(needle);
		
        if (m == 0) return haystack;
		if (m > n) return NULL;
		int *failure = calculateFailureFunction(needle, m);
		int prefixLength = 0;
		for (int i=0; i<n; ++i) {
			while (prefixLength > 0 && needle[prefixLength] != haystack[i]) {
				prefixLength = failure[prefixLength-1];
			}
			if (needle[prefixLength] == haystack[i]) {
				prefixLength = prefixLength + 1;
			}
			if (prefixLength == m) {
				return haystack + (i-m+1);
			}
		}
		return NULL;
    }

	int *calculateFailureFunction(char *pattern, int m) {
		int *failure = new int[m];
		failure[0] = 0;
		int prefixLength = 0;
		for (int i=1; i<m; ++i) {
			while (prefixLength > 0 && (pattern[prefixLength] != pattern[i])) {
				prefixLength = failure[prefixLength-1];
			}
			if (pattern[prefixLength] == pattern[i]) {
				prefixLength = prefixLength + 1;
			}
			failure[i] = prefixLength;
		}
		return failure;
	}
};

int main() {
	char *output = Solution().strStr("aaa", "a");
	system("pause");
}*/
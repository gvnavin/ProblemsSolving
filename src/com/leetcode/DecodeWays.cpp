/*
#include <string>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {

		if (s.empty()) return 0;
	
		int *ways = new int[s.length()];
		memset(ways, 0, sizeof(int)*s.length());
		if (s[0] == '0') {
			ways[0] = 0;
		} else {
			ways[0] = 1;
		}
		for (int i=1; i<s.length(); ++i) {
			if (s[i] == '0') {
				ways[i] = 0;
			} else {
				ways[i] = ways[i-1];
			} 
			if (s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')) {
				ways[i] += (i-2 >= 0 ? ways[i-2] : 1);
			}
		}
		return ways[s.length()-1];
    }
};*/
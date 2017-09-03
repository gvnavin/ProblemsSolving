/*
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
private:
	int longestCommonSubsequence(string a, int aIndex, string b, int bIndex, map<pair<int,int>,int> &cache) {

		if (aIndex >= a.length() || bIndex >= b.length()) return 0;
		pair<int,int> mapKey(aIndex,bIndex);
		map<pair<int,int>,int>::iterator iter = cache.find(mapKey);
		if (iter != cache.end()) {
			return iter->second;
		}

		int output = -1;
		if (a[aIndex] == b[bIndex]) {
			output = longestCommonSubsequence(a, aIndex+1, b, bIndex+1, cache) + 1;
		} else {
			output = max(longestCommonSubsequence(a, aIndex, b, bIndex+1,cache),
				longestCommonSubsequence(a, aIndex+1, b, bIndex, cache));
		}
		cache.insert(pair<pair<int,int>,int>(mapKey, output));
		return output;
	}
public:
	int longestCommonSubsequence(string a, string b) {
		map<pair<int,int>,int> cache;
		return longestCommonSubsequence(a, 0, b, 0, cache);
	}
};

int main() {
	string a = "BDCB";
	string b = "BACDB";

	int output = Solution().longestCommonSubsequence(a,b);
	system("pause");
}*/
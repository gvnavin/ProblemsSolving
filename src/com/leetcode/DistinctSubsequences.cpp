/*
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int numDistinct(string S, string T) {
        
		map<pair<int, int>,int> cache;
		int output = numDistinctHelper(S, T, 0, 0, cache);
		return output;
    }

	int numDistinctHelper(string &S, string &T, int Sindex, int Tindex, map<pair<int, int>,int> &cache) {

		pair<int, int> cacheKey(Sindex, Tindex);
		map<pair<int, int>,int>::iterator iter = cache.find(cacheKey);
		if (iter != cache.end()) {
			return iter->second;
		}

		if (Tindex == T.length()) {
			return 1;
		}

		if (Sindex == S.length()) {
			return 0;
		}

		int output = 0;
		if (S[Sindex] == T[Tindex]) {
			output += numDistinctHelper(S, T, Sindex+1, Tindex+1, cache);
		}
		output += numDistinctHelper(S, T, Sindex+1, Tindex, cache);

		cache.insert(pair<pair<int,int>,int>(cacheKey, output));
		return output;
	}
};

int main() {
	string S = "rabbbit";
	string T = "rabbit";

	int count = Solution().numDistinct(S, T);
	system("pause");
}*/
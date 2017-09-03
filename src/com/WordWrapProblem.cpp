/*
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution{

public:
	int calcost(vector<string> strs, int lineLength, int currentLength, int index, map<pair<int,int>,int> &cache) {
		if (index >= strs.size()) return 0;
		if (currentLength <= 0) return INT_MAX;
		if (strs[index].length() > currentLength) return INT_MAX;

		pair<int,int> cacheKey(currentLength, index);
		map<pair<int,int>,int>::iterator iter = cache.find(cacheKey);
		if (iter != cache.end()) {
			return iter->second;
		}

		int cost = pow(double(currentLength-strs[index].length()),3);
		int output1 = calcost(strs, lineLength, lineLength, index+1, cache);

		int output2 = calcost(strs, lineLength, currentLength - (strs[index].length()+1), index+1, cache);
		int output3 = min(output1 + cost, output2);
		cache.insert(make_pair(cacheKey, output3));
		return output3;
	}
};

int main() {
	vector<string> strs;
	strs.push_back("aaa");
	strs.push_back("bb");
	strs.push_back("cc");
	strs.push_back("ddddd");
	map<pair<int,int>,int> cache;
	int a = Solution().calcost(strs,6,6,0,cache);
	system("pause");
}*/
/*
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
	int alignmentCost(string a, string b) {
		map<pair<int,int>,int> cache;
		return alignmentCostHelper(a, 0, b, 0, cache);
	}

	int alignmentCostHelper(string a, int indexa, string b, int indexb,map<pair<int,int>,int>& cache) {
		if (!(indexa < a.size())) return b.size() - indexb;
		if (!(indexb < b.size())) return a.size() - indexa;

		pair<int,int> cacheKey(indexa,indexb);
		map<pair<int,int>,int>::iterator iter = cache.find(cacheKey);
		if (iter != cache.end()) {
			return iter->second;
		}

		int output = -1;
		if (a[indexa] == b[indexb]) {
			output = alignmentCostHelper(a, indexa + 1, b, indexb + 1, cache);
		}
		else {
			int option1 = alignmentCostHelper(a, indexa, b, indexb + 1, cache) + 1;
			int option2 = alignmentCostHelper(a, indexa + 1, b, indexb, cache) + 1;
			output = min(option1,option2);
		}
		cache.insert(pair<pair<int,int>,int>(cacheKey,output));
		return output;
	}
};

int main() {
	cout << Solution().alignmentCost("ctatg","ttaagc");
	system("pause");
}*/
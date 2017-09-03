/*
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
	
	 
public:
	int cacheHit;
	int cacheMiss;

	Solution() {
		cacheHit = 0;
		cacheMiss = 0;
	}
	int knapsack(int capacity, int weights[], int n) {

		map<pair<int,int>,int> dpCache;
		return knapsackHelper(capacity, 0, weights, n, dpCache);
	}

	int knapsackHelper(int capacity, int i, int weights[], int n, map<pair<int,int>,int>& dpCache) {

		pair<int,int> cacheKey(capacity, i);
		map<pair<int,int>,int>::iterator iter = dpCache.find(cacheKey);
		if (iter != dpCache.end()) {
			++cacheHit;
			cout << "cache hit" << " capacity=" << capacity << " i=" << i << endl;
			return iter->second;
		}
		else {
			++cacheMiss;
			cout << "cache mis" << " capacity=" << capacity << " i=" << i << endl;
		}

		if (!(i<n)) return 0;

		int output = -1;
		if (weights[i] <= capacity) {
			int includeI = knapsackHelper((capacity - weights[i]), i+1, weights, n, dpCache) + weights[i];
			int excludeI = knapsackHelper(capacity, i+1, weights, n, dpCache);
			output = max(includeI, excludeI);
		}
		else {
			int excludeI = knapsackHelper(capacity, i+1, weights, n, dpCache);
			output = excludeI;
		}

		cout << "cache ins" << " capacity=" << capacity << " i=" << i << endl;
		dpCache.insert(dpCache.end(), pair<pair<int,int>,int>(cacheKey, output));
		return output;
	}
};

int main() {
	int weights[] = {1,2,3,5,10};
	Solution sol;

	cout << sol.knapsack(10, weights, 5) << endl;
	cout << "hit" << sol.cacheHit << " miss" << sol.cacheMiss << " total" << sol.cacheHit + sol.cacheMiss << endl;
	system("pause");
}*/
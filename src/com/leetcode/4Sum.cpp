/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
private:
	void preprocess(vector<int> &num, map<int, vector<int> > &lookup) {

		int numSize = num.size();
		for (int i=0; i<numSize-1; ++i) {
			for (int j=i+1; j<numSize; ) {
				vector<int> &startIndices = lookup[num[i]+num[j]];
				startIndices.push_back(i);
				++j;
				while (j < numSize && num[j-1] == num[j]) {
					++j;
				}
			}
		}
	}
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        
		sort(num.begin(), num.end());
		vector<vector<int> > quadruplets;
		map<int, vector<int> > lookup;
		preprocess(num, lookup);

		int numSize = num.size();
		for (int i=0; i<numSize-3; ) {
			for (int j=i+1; j<numSize-2; ) {

				int lookupValue = target - (num[i] + num[j]);
				map<int, vector<int> >::iterator iter = lookup.find(lookupValue);
				if (iter != lookup.end()) {
					vector<int> &indices = lookup[lookupValue];
					for (int idx=0; idx< indices.size(); ) {
						if (indices[idx] > j) {
							vector<int> quadruplet;
							quadruplet.push_back(num[i]);
							quadruplet.push_back(num[j]);
							quadruplet.push_back(num[indices[idx]]);
							quadruplet.push_back(lookupValue-num[indices[idx]]);
							quadruplets.push_back(quadruplet);
							++idx;
							while (idx < indices.size() && num[indices[idx-1]] == num[indices[idx]]) {
								++idx;
							}
						} else {
							++idx;
						}
					}
				}
				++j;
				while (j < num.size()-2 && num[j-1] == num[j]) {
					++j;
				}
			}
			++i;
			while (i < num.size()-3 && num[i-1] == num[i]) {
				++i;
			}
		}
		return quadruplets;
    }
};

int main() {

	int arr[] = {0,0,0,0}; 
	vector<int> num(arr, arr+sizeof(arr)/sizeof(int));
	int target = 0;
	vector<vector<int> > output = Solution().fourSum(num, target);
}*/
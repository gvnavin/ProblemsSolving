/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		sort(candidates.begin(), candidates.end());
		unique(candidates.begin(), candidates.end());

		vector<vector<int> > output;
		vector<int> emptyCombination;
		combinationSumHelper(candidates, target, 0, emptyCombination, output);
		return output;
    }

	void combinationSumHelper(vector<int> &candidates, int target, int index, vector<int>& previousCombination, vector<vector<int> >& output) {

		if (target == 0) {
			output.push_back(previousCombination);
			return;
		}
		if (target < 0) return;

		for (int i=index; i<candidates.size(); i++) {

			int currentCandidate = candidates[i];

			if (currentCandidate <= target) {
				vector<int> combination(previousCombination.begin(), previousCombination.end());
				combination.push_back(currentCandidate);
				combinationSumHelper(candidates, target - currentCandidate, i, combination, output);
			}
		}
	}
};

int main() {
	int c[] = {2,3,6,7};
	vector<int> candidates(c, c+ sizeof(c)/sizeof(c[0]));
	vector<vector<int> > output = Solution().combinationSum(candidates, 7);
	return 0;
}*/
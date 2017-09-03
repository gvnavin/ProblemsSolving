/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &candidates, int target) {

		sort(candidates.begin(), candidates.end());
		
		set<vector<int> > outputSet;
		vector<int> emptyCombination;
		combinationSumHelper(candidates, target, 0, emptyCombination, outputSet);
		vector<vector<int> > output(outputSet.begin(), outputSet.end());
		return output;
    }

	void combinationSumHelper(vector<int> &candidates, int target, int index, vector<int>& previousCombination, set<vector<int> >& output) {

		if (target == 0) {
			sort(previousCombination.begin(), previousCombination.end());
			output.insert(previousCombination);
			return;
		}
		if (target < 0) return;

		for (int i=index; i<candidates.size(); i++) {

			int currentCandidate = candidates[i];

			if (currentCandidate <= target) {
				vector<int> combination(previousCombination.begin(), previousCombination.end());
				combination.push_back(currentCandidate);
				combinationSumHelper(candidates, target - currentCandidate, i+1, combination, output);
			}
		}
	}
};

int main() {
	int c[] = {10,1,2,7,6,1,5};
	vector<int> candidates(c, c+ sizeof(c)/sizeof(c[0]));
	vector<vector<int> > output = Solution().combinationSum(candidates, 8);
	return 0;
}*/
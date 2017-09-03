/*
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {

private:
	void combinationSumHelper(vector<int> &candidates, int target, int index, vector<int> &candidateSet, vector<vector<int> > &output) {

		if (target == 0) {
			output.push_back(candidateSet);
			return;
		}
		if (index >= candidates.size()) return;
		
		int currentCandidate = candidates[index];
		for (int i=0; i*currentCandidate<=target; ++i) {
			candidateSet.insert(candidateSet.end(),i,currentCandidate);
			combinationSumHelper(candidates, target-(i*currentCandidate), index+1, candidateSet, output);
			candidateSet.resize(candidateSet.size()-i);
		}

	}
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        
		sort(candidates.begin(), candidates.end());
		unique(candidates.begin(), candidates.end());

		vector<vector<int> > output;
		vector<int> empty;
		combinationSumHelper(candidates, target, 0, empty, output);
		return output;
    }
};

int main() {
	int a[] = {2,3,6,7};
	vector<int> candidates(a, a+sizeof(a)/sizeof(int));
	int target = 7;
	vector<vector<int> > output = Solution().combinationSum(candidates, target);
}*/
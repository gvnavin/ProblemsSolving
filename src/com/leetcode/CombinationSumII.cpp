/*
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
private:
	void combinationSum2Helper(vector<int> &num, int target, int index, vector<int> &candidateSet, vector<vector<int> > &output) {

		if (target == 0) {
			output.push_back(candidateSet);
			return;
		}
		if (index >= num.size()) return;
		int currentCandidate = num[index];
		int nextCandidateIndex = index+1;

		while (nextCandidateIndex < num.size() && num[nextCandidateIndex-1] == num[nextCandidateIndex]) {
			++nextCandidateIndex;
		}
		for (int i=0; i<= nextCandidateIndex-index && (i*currentCandidate <= target); ++i) {
			candidateSet.insert(candidateSet.end(), i, currentCandidate);
			combinationSum2Helper(num, target-(currentCandidate*i), nextCandidateIndex, candidateSet, output);
			candidateSet.resize(candidateSet.size()-i);
		}
	}
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        
		sort(num.begin(), num.end());
		vector<int> empty;
		vector<vector<int> > output;
		combinationSum2Helper(num, target, 0, empty, output);
		return output;
    }
};*/
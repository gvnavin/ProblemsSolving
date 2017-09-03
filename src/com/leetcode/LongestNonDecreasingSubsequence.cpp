/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct valueHolder {
	int seqSize;
	int previousIndex;
	valueHolder() {
		seqSize = 1;
		previousIndex = -1;
	}
	valueHolder(int size, int prevIndex) {
		seqSize = size;
		previousIndex = prevIndex;
	}
};

class Solution {
public:
	vector<int> longestNonDecreasingSubsequence(vector<int>& sequence) {
		
		struct valueHolder* cache = new struct valueHolder[sequence.size()];
		
		int outputLength = -1;
		int outputStartIndex = -1;
		for (int i=0; i<sequence.size(); i++) {
			int currentValue = sequence[i];
			int maxSequenceLength = 1;
			int previousIndex = -1;
			for (int j=i-1; j>=0; j--) {
				if (currentValue >= sequence[j] && maxSequenceLength < cache[j].seqSize + 1) {
					maxSequenceLength = cache[j].seqSize + 1;
					previousIndex = j;
				}
			}
			cache[i].seqSize = maxSequenceLength;
			cache[i].previousIndex = previousIndex;
			if (outputLength < maxSequenceLength) {
				outputLength = maxSequenceLength;
				outputStartIndex = i;
			}
		}

		int idx=outputStartIndex;
		vector<int> output;
		while (idx >= 0) {
			output.push_back(sequence[idx]);
			idx = cache[idx].previousIndex;
		}
		delete[] cache;
		reverse(output.begin(), output.end());
		return output;
	}
};

int main() {
	int sequence[] = {1,3,5,2,7};
	vector<int> sequenceVec(sequence, sequence + sizeof(sequence) / sizeof(sequence[0]));
	vector<int> output = Solution().longestNonDecreasingSubsequence(sequenceVec);
	system("pause");
}*/
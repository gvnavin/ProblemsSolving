/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<vector<int> > distinctRepresentation(int num) {
		vector<int> numVec;
		numVec.push_back(num);
		vector<int> empty;
		vector<vector<int> > output = distinctRepresentationHelper(num, 1, empty);
		output.push_back(numVec);
		return output;
	}

	vector<vector<int> > distinctRepresentationHelper(int num, int previous, vector<int>& prefix) {

		vector<vector<int> > output;
		for (int i=previous; i<= num/2; ++i) {
			int next = num-i;
			vector<int> combinations;
			combinations.insert(combinations.end(), prefix.begin(), prefix.end());
			combinations.push_back(i);
			vector<vector<int> > combinationsNext = distinctRepresentationHelper(next, i, combinations);
			output.insert(output.end(), combinationsNext.begin(), combinationsNext.end());			
			combinations.push_back(next);			
			output.push_back(combinations);
		}
		return output;
	}
};

int main() {
	vector<vector<int> > output = Solution().distinctRepresentation(5);
	system("pause");
}*/
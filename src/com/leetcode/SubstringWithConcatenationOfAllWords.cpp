/*
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
        
		vector<int> output;
		if (L.empty() || S.empty()) return output;

		int patternLength = L[0].size() * L.size();
		int indPatternLength = L[0].size();
		int inputLength = S.length();
		int matchCount = L.size();
		map<string,int> patternMap;
		for (int i=0; i<L.size(); ++i) {
			patternMap[L[i]] += 1;
		}

		for (int i=0; i<inputLength-patternLength+1; ++i) {
			int currentMatchCount = 0;
			map<string,int> frequency;
			for (int j=i; j<=inputLength; j+=indPatternLength) {
				string inputSubpart = S.substr(j,indPatternLength);
				map<string,int>::iterator iter = patternMap.find(inputSubpart);
				if (iter == patternMap.end()) break;

				int expectedFrequency = iter->second;
				int currentFrequency = (++frequency[inputSubpart]);
				if (currentFrequency > expectedFrequency) break;

				++currentMatchCount;
				if (currentMatchCount == matchCount) {
					output.push_back(i);
					break;
				}
			}
		}
		return output;
    }
};

int main() {
	string S = "barfoothefoobarman";
	vector<string> L;
	L.push_back("foo");
	L.push_back("bar");
	vector<int> output = Solution().findSubstring(S,L);
	system("pause");
}*/
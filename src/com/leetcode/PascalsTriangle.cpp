/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        
		vector<vector<int> > pascalsTriangle;
		if (numRows >= 1) {
			pascalsTriangle.push_back(vector<int>(1,1));
		}
		if (numRows >= 2) {
			pascalsTriangle.push_back(vector<int>(2,1));
		}
		for (int i=3; i<=numRows; ++i) {
			vector<int> &previousRow = pascalsTriangle[i-2];
			vector<int> row;
			row.push_back(1);
			for (int j=1; j<=i-2; ++j) {
				row.push_back(previousRow[j-1] + previousRow[j]);
			}
			row.push_back(1);
			pascalsTriangle.push_back(row);
		}
		return pascalsTriangle;
    }
};

int main() {
	int n = 5;
	vector<vector<int> > triangle = Solution().generate(5);
	system("pause");
}*/
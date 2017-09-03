/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
       
    	vector<int> output;
		output.push_back(1);
		int n = rowIndex;
		int x = 0;
		for (int i=1; i<=rowIndex; ++i) {
			long long nextOutput = output.back();
            nextOutput *= (n-x);
            nextOutput /= (x+1);
			++x;
			output.push_back(nextOutput);
		}
		return output;
    }
};*/
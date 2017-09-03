/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
		if (matrix.empty()) return;

		int n = matrix.size();
		int iteration = 0;
		while (n > 0) {
			int row = iteration;
			int col = iteration;
			int shift = 0;
			for (int i=0; i<n-1; ++i) {
				int temp = matrix[row+shift][col+n-1];
				matrix[row+shift][col+n-1] = matrix[row][col+shift];
				int temp1 = matrix[row+n-1][col+n-1-shift];
				matrix[row+n-1][col+n-1-shift] = temp;
				int temp2 = matrix[row+n-1-shift][col];
				matrix[row+n-1-shift][col] = temp1;
				matrix[row][col+shift] = temp2;
				++shift;
			}

			++iteration;
			n = (n-2);
		}
        
    }
};*/
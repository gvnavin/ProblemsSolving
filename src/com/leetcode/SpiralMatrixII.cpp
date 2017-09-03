/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
		vector<vector<int> > matrix;
		if (n == 0) return matrix;
		
		for (int i=0; i<n; ++i) {
			vector<int> row(n);
			matrix.push_back(row);
		}

		int total = getTotal(n);
		int iteration = 0;
		int current = 1;
		while (total > 0) {
			int row = iteration;
			int col = iteration;
			matrix[row][col] = current++;
			for (int i=0; i<total-1; ++i) {
				if (i<n-1) {
					col = col + 1;
				} else if (i>= n-1 && i< 2*(n-1)) {
					row = row + 1;
				} else if (i>= 2*(n-1) && i< 3*(n-1)) {
					col = col - 1;
				} else if (i>= 3*(n-1)) {
					row = row - 1;
				}
				matrix[row][col] = current++;
			}
			++iteration;
			n = n-2;
			total = getTotal(n);
		}
		return matrix;
    }

	int getTotal(int n) {
		if (n == 1) return 1;
		return (n-1)*4;
	}
};

int main() {
	vector<vector<int> > output = Solution().generateMatrix(3);
	system("pause");
}*/
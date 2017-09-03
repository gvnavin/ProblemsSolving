/*
#include <iostream>
#include <vector>
using namespace std;

#define isBetween(x, a, b) (x >= a && x<b)


class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {

		if (matrix.empty()) return false;

		int rows = matrix.size();
		int columns = matrix[0].size();

		int row = 0;
		int col = matrix[0].size() - 1;

		while (isBetween(row, 0, rows) && isBetween(col, 0, columns)) {
			if (matrix[row][col] == target) return true;
			if (matrix[row][col] > target) {
				col -= 1;
			} else if (matrix[row][col] < target) {
				row += 1;
			}
		}
		return false;
    }
};*/
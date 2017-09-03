/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
		if (matrix.empty()) return;

		int rows = matrix.size();
		int columns = matrix[0].size();

		int rowI = -1;
		int columnJ = -1;
		for (int i=0; i<rows; ++i) {
			for (int j=0; j<columns; ++j) {
				if (matrix[i][j] == 0) {
					rowI = i;
					columnJ = j;

					i = rows;
					j = columns;
				}
			}
		}
		if (rowI == -1 || columnJ == -1) return;

		for (int i=0; i<rows; ++i) {
			for (int j=0; j<columns; ++j) {
				if (matrix[i][j] == 0) {
					matrix[rowI][j] = 0;
					matrix[i][columnJ] = 0;
				}
			}
		}

		for (int j=0; j<columns; ++j) {
			if (matrix[rowI][j] == 0 && j != columnJ) {
				for (int i=0; i<rows; ++i) {
					matrix[i][j] = 0;
				}
			}
		}

		for (int i=0; i<rows; ++i) {
			if (matrix[i][columnJ] == 0 && i != rowI)  {
				for (int j=0; j<columns; ++j) {
					matrix[i][j] = 0;
				}
			}
		}

		for (int j=0; j<columns; ++j) {
			matrix[rowI][j] = 0;
		}

		for (int i=0; i<rows; ++i) {
			matrix[i][columnJ] = 0;
		}
    }
};

int main() {
	vector<vector<int> > matrix;
	vector<int> row;
	row.push_back(1);
	row.push_back(0);
	matrix.push_back(row);
	Solution().setZeroes(matrix);
	system("pause");
}*/
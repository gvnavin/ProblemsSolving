/*
#include <vector>
using namespace std;

class Solution {
public:
    int totalNQueens(int n) {
		vector<bool> row(n,false);
		vector<bool> topLeftDiagonal(1 + 2*(n-1), false);
		vector<bool> bottomLeftDiagonal(1 + 2*(n-1), false);
		int output = 0;
		solveNQueens(0, n, row, topLeftDiagonal, bottomLeftDiagonal, output);
		return output;
    }

	bool isValidMove(int i, int j, int n, vector<bool> &row, 
		vector<bool> &topLeftDiagonal, vector<bool> &bottomLeftDiagonal) {

		if (row[i]) return false;

		int diff = i-j;
		if (diff < 0) { 
			diff = (-diff) + (n-1);
		}
		if (topLeftDiagonal[diff]) return false;

		int sum = i+j;
		if (bottomLeftDiagonal[sum]) return false;
		return true;
	}

	void setMove(int i, int j, int n, bool state, vector<bool> &row, 
		vector<bool> &topLeftDiagonal, vector<bool> &bottomLeftDiagonal) {

		row[i] = state;

		int diff = i-j;
		if (diff < 0) { 
			diff = (-diff) + n-1;
		}
		topLeftDiagonal[diff] = state;

		int sum = i+j;
		bottomLeftDiagonal[sum] = state;
	}

	void solveNQueens(int column, int n, vector<bool> &row, vector<bool> &topLeftDiagonal, 
		vector<bool> &bottomLeftDiagonal, int &output) {
		
		if (column == n) {
			output += 1;
			return;
		}

		for (int i=0; i<n; ++i) {
			if (isValidMove(i, column, n, row, topLeftDiagonal, bottomLeftDiagonal)) {
				setMove(i, column, n, true, row, topLeftDiagonal, bottomLeftDiagonal);
				solveNQueens(column+1, n, row, topLeftDiagonal, bottomLeftDiagonal, output);
				setMove(i, column, n, false, row, topLeftDiagonal, bottomLeftDiagonal);
			}
		}
	}
};

int main() {
	int output = Solution().totalNQueens(12);
	system("pause");
}*/
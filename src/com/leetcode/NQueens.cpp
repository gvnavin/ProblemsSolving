/*
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
        
		vector<vector<string> > output;
		vector<string> board;
		string row(n,'.');
		board.insert(board.end(), n, row);
		solveNQueens(0, n, board, output);
		return output;
    }

	bool isValidMove(int row, int column, int n, vector<string> &board) {
		for (int j=column-1; j>=0; --j) {
			if (board[row][j] == 'Q') {
				return false;
			}
		}
		int i = row-1;
		int j = column-1;
		while (i >= 0 && j >= 0) {
			if (board[i][j] == 'Q') {
				return false;
			}
			--i;
			--j;
		}
		i = row+1;
		j = column-1;
		while (i < n && j >= 0) {
			if (board[i][j] == 'Q') {
				return false;
			}
			++i;
			--j;
		}
		return true;
	}

	void solveNQueens(int column, int n, vector<string> &board, vector<vector<string> > &output) {
		if (column == n) {
			output.push_back(board);
			return;
		}

		for (int i=0; i<n; ++i) {
			if (isValidMove(i, column, n, board)) {
				board[i][column] = 'Q';
				solveNQueens(column+1, n, board, output);
				board[i][column] = '.';
			}
		}
	}
};

int main() {
	vector<vector<string> > output = Solution().solveNQueens(4);
	system("pause");
}*/
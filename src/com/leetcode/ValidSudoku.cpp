/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
		
		bool vals[] = {false,false,false,false,false,false,false,false,false};
		vector<bool> values(vals, vals+sizeof(vals)/sizeof(bool));

		vector<vector<bool> > columns(9, values);
		vector<vector<bool> > rows(9,values);
		vector<vector<bool> > grids(9,values);

		for (int i=0; i<9; ++i) {
			for (int j=0; j<9; ++j) {
				if (board[i][j] != '.') {
					int val = board[i][j]-'0';
					if (val < 1 || val > 9) return false;
					if (rows[i][val-1]) {
						return false;
					}
					if (columns[j][val-1]) {
						return false;
					}
					if (grids[3*(i/3)+j/3][val-1]) {
						return false;
					}
					rows[i][val-1] = true;
					columns[j][val-1] = true;
					grids[3*(i/3)+j/3][val-1] = true;
				}
			}
		}
		return true;
    }
};

int main() {
	char row1[] = {'5','3','.','.','7','.','.','.','.'};
	char row2[] = {'6','.','.','1','9','5','.','.','.'};
	char row3[] = {'.','9','8','.','.','.','.','6','.'};
	char row4[] = {'8','.','.','.','6','.','.','.','3'};
	char row5[] = {'4','.','.','8','.','3','.','.','1'};
	char row6[] = {'7','.','.','.','2','.','.','.','6'};
	char row7[] = {'.','6','.','.','.','.','2','8','.'};
	char row8[] = {'.','.','.','4','1','9','.','.','5'};
	char row9[] = {'.','.','.','.','8','.','.','7','9'};
	vector<vector<char> > board;
	board.push_back(vector<char>(row1, row1+sizeof(row1)/sizeof(char)));
	board.push_back(vector<char>(row2, row2+sizeof(row2)/sizeof(char)));
	board.push_back(vector<char>(row3, row3+sizeof(row3)/sizeof(char)));
	board.push_back(vector<char>(row4, row4+sizeof(row4)/sizeof(char)));
	board.push_back(vector<char>(row5, row5+sizeof(row5)/sizeof(char)));
	board.push_back(vector<char>(row6, row6+sizeof(row6)/sizeof(char)));
	board.push_back(vector<char>(row7, row7+sizeof(row7)/sizeof(char)));
	board.push_back(vector<char>(row8, row8+sizeof(row8)/sizeof(char)));
	board.push_back(vector<char>(row9, row9+sizeof(row9)/sizeof(char)));
	bool output = Solution().isValidSudoku(board);
	system("pause");
}*/
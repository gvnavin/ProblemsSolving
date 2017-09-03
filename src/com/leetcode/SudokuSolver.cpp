/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char> > &board) {

		bool vals[] = {false,false,false,false,false,false,false,false,false};
		vector<bool> values(vals, vals+sizeof(vals)/sizeof(bool));

		vector<vector<bool> > columns(9, values);
		vector<vector<bool> > rows(9,values);
		vector<vector<bool> > grids(9,values);
		for (int i=0; i<9; ++i) {
			for (int j=0; j<9; ++j) {
				if (board[i][j] != '.') {
					int value = board[i][j]-'0';
					setValue(i,j,value,true,columns,rows,grids);
				}
			}
		}
		solveSudokuHelper(board,0,0,columns,rows,grids, true);
    }

	bool solveSudokuHelper(vector<vector<char> > &board,int row, int column, vector<vector<bool> > &columns, 
		vector<vector<bool> > &rows, vector<vector<bool> > &grids, bool begin) {

		if (row == 0 && column == 0 && begin == false) return true;
		
		int nextColumn = (column+1)%9;
		int nextRow = row;
		if (nextColumn == 0) {
			nextRow = (row+1)%9;
		}

		if (board[row][column] == '.') {
			for (int i=1; i<=9; ++i) {
				if (isValidMove(row,column,i,columns,rows,grids)) {
					board[row][column] = i+'0';
					setValue(row, column, i, true, columns, rows, grids);
					if (solveSudokuHelper(board,nextRow,nextColumn,columns,rows,grids,false)) {
						return true;
					}
					board[row][column] = '.';
					setValue(row, column, i, false, columns, rows, grids);
				}				
			}
			return false;
		}
		return solveSudokuHelper(board, nextRow, nextColumn, columns, rows, grids, false);
	}

	void setValue(int row, int column, int value, bool state, vector<vector<bool> > &columns,
		vector<vector<bool> > &rows, vector<vector<bool> > &grids) {

		rows[row][value-1] = state;
		columns[column][value-1] = state;
		grids[3*(row/3)+column/3][value-1] = state;
	}

	bool isValidMove(int row, int column, int value, vector<vector<bool> > &columns, 
		vector<vector<bool> > &rows, vector<vector<bool> > &grids) {
		if (columns[column][value-1]) {
			return false;
		}
		if (rows[row][value-1]) {
			return false;
		}
		if (grids[3*(row/3)+column/3][value-1]) {
			return false;
		}
		return true;
	}
};

int main() {
	char row1[] = {'.','.','9','7','4','8','.','.','.'};
	char row2[] = {'7','.','.','.','.','.','.','.','.'};
	char row3[] = {'.','2','.','1','.','9','.','.','.'};
	char row4[] = {'.','.','7','.','.','.','2','4','.'};
	char row5[] = {'.','6','4','.','1','.','5','9','.'};
	char row6[] = {'.','9','8','.','.','.','3','.','.'};
	char row7[] = {'.','.','.','8','.','3','.','2','.'};
	char row8[] = {'.','.','.','.','.','.','.','.','6'};
	char row9[] = {'.','.','.','2','7','5','9','.','.'};
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
	Solution().solveSudoku(board);
	system("pause");
}*/
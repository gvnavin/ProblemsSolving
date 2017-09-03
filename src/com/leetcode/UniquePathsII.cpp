/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
		
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();

        int** paths = new int*[m];
		for (int i=0; i<m; i++) {
			paths[i] = new int[n];
			memset(paths[i], 0, n*sizeof(int));
		}

		for (int i=0; i<m; i++) {
			if (obstacleGrid[i][0] == 1) break;
				paths[i][0] = 1;
		}

		for (int j=0; j<n; j++) {
			if (obstacleGrid[0][j] == 1) break;
			paths[0][j] = 1;
		}

		for (int i=1; i<m; i++) {
			for (int j=1; j<n; j++) {
				if (obstacleGrid[i][j] == 0) {
					paths[i][j] = paths[i-1][j] + paths[i][j-1];
				}
				else {
					paths[i][j] = 0;
				}
			}
		}

		int output = paths[m-1][n-1];

		for (int i=0; i<m; i++) {
			delete[] paths[i];
		}
		delete[] paths;

		return output;
    }
};

int main() {
	vector<vector<int> > obstacleGrid;
	int row1[] = {0,0,0};
	obstacleGrid.push_back(vector<int>(row1, row1 + sizeof(row1)/sizeof(row1[0])));
	int row2[] = {0,1,0};
	obstacleGrid.push_back(vector<int>(row2, row2 + sizeof(row2)/sizeof(row2[0])));
	char row3[] = {0,0,0};
	obstacleGrid.push_back(vector<int>(row3, row3 + sizeof(row3)/sizeof(row3[0])));
	cout << Solution().uniquePathsWithObstacles(obstacleGrid);
	system("pause");
}
*/

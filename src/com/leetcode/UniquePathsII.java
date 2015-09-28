package com.leetcode;

/**
 * Created by gnavin on 7/25/15.
 */
public class UniquePathsII {

    //https://leetcode.com/problems/unique-paths-ii/
    public int uniquePathsWithObstacles(int[][] inpGrid) {
        int m = inpGrid.length;
        if (m <= 0) {
            return 0;
        }
        int n = inpGrid[0].length;

        if (n <= 0) {
            return 0;
        }

        int[][] grid = new int[100][100];

        grid[0][0] = 1 - inpGrid[0][0];

        for (int i = 1; i < m; i++) {
            if (inpGrid[i][0] != 1) {
                grid[i][0] = grid[i - 1][0];
            } else {
                grid[i][0] = 0;
            }
        }

        for (int i = 1; i < n; i++) {
            if (inpGrid[0][i] != 1) {
                grid[0][i] = grid[0][i - 1];
            } else {
                grid[0][i] = 0;
            }
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (inpGrid[i][j] != 1) {
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                } else {
                    grid[i][j] = 0;
                }
            }
        }

        return grid[m - 1][n - 1];
    }

}

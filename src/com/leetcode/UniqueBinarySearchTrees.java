package com.leetcode;

import java.util.Arrays;

/**
 * Created by gnavin on 7/25/15.
 */
public class UniqueBinarySearchTrees {
    int memo[];
    public int numTrees(int n) {
        memo = new int[n+1];
        Arrays.fill(memo, -1);
        return catalanNumber(n);
    }
    int catalanNumber(int n) {
        if (n == 0) {
            return 1;
        }
        if (memo[n] != -1) {
            return memo[n];
        }
        int sum = 0;
        for(int i=0; i<n ;i++) {
            sum += catalanNumber(i) * catalanNumber(n-i-1);
        }
        memo[n] = sum;
        return sum;
    }
}

package com.leetcode;

/**
 * Created by gnavin on 7/25/15.
 */
public class MaximumSubarray {

    //https://leetcode.com/problems/maximum-subarray/
    public int maxSubArray(int[] nums) {
        int sz = nums.length;
        int mx[] = new int[sz];
        int maximumSum = mx[0] = nums[0];
        for (int i = 1; i < sz; i++) {
            if (mx[i-1] + nums[i] >= nums[i]) {
                mx[i] = mx[i-1] + nums[i];
            } else {
                mx[i] = nums[i];
            }
            maximumSum = Math.max(maximumSum , mx[i]);
        }
        return maximumSum;
    }

    public int maxSubArray2(int[] nums) {
        int sz = nums.length;
        int mx[] = new int[sz];
        int maximumSum = mx[0] = nums[0];
        for (int i = 1; i < sz; i++) {
            mx[i] = Math.max(nums[i], mx[i-1] + nums[i]);
            maximumSum = Math.max(maximumSum , mx[i]);
        }
        return maximumSum;
    }
}

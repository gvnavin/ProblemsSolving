/*
#include <iostream>

using namespace std;

class Solution {
public:
    int maxSubArray(int A[], int n) {

		int maxSum = INT_MIN;
		int currentSum = 0;
		for (int i=0; i<n; i++) {
			currentSum += A[i];
			if (currentSum < 0) {
				maxSum = max(A[i],maxSum);
				currentSum = 0;
			}
			else {
				maxSum = max(currentSum,maxSum);
			}
		}
        return maxSum;
    }
};*/
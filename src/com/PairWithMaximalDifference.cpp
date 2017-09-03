// Divide and conquer algorithm for this problem.
// Good one although this can be easily done by computing suffix minium or prefix maximum
/*
#include <iostream>

using namespace std;

class Solution {
public:
	int maximalDifference(int A[], int n) {
		int maximum = -1;
		int minimum = -1;
		return maximalDifferenceDivideConquer(A, 0, n-1, maximum, minimum);
	}

	int maximalDifferenceDivideConquer(int A[], int startIndex, int endIndex, int& maximum, int &minimum) {

		if (startIndex == endIndex) {
			maximum = A[startIndex];
			minimum = A[startIndex];
			return INT_MIN;
		}

		int middle = (startIndex + endIndex)/2;
		int maxLeft = -1;
		int minLeft = -1;
		int maxRight = -1;
		int minRight = -1;
		int outputLeft = maximalDifferenceDivideConquer(A, startIndex, middle, maxLeft, minLeft);
		int outputRight = maximalDifferenceDivideConquer(A, middle+1, endIndex, maxRight, minRight);
		maximum = max(maxLeft,maxRight);
		minimum = min(minLeft,minRight);
		return max(outputLeft, max(outputRight, maxLeft - minRight));
	}
};

int main() {
	int A[] = {2,4,1,16,7,5,11,9};
	int n = sizeof(A)/sizeof(int);
	cout << Solution().maximalDifference(A,n);
	system("pause");
}*/
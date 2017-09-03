/*
#include <iostream>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
		if ((m+n)%2 == 0) {
			double median1 = (double)findMedianSortedArraysHelper(A, m, B, n, (m+n)/2);
			double median2 = (double)findMedianSortedArraysHelper(A, m, B, n, (m+n)/2+1);
			return (median1+median2)/2;
		}
        return findMedianSortedArraysHelper(A, m, B, n, (m+n)/2+1);
    }

	double findMedianSortedArraysHelper(int A[], int m, int B[], int n, int k) {

		int i = (int)((double)m/ (m+n) * (k-1));
		int j = k-1-i;

		int Ai_1 = (i==0) ? INT_MIN : A[i-1];
		int Bj_1 = (j==0) ? INT_MIN : B[j-1];
		int Ai = (i==m) ? INT_MAX : A[i];
		int Bj = (j==n) ? INT_MAX : B[j];

		if ((Ai > Bj_1) && (Ai < Bj)) return Ai;
		if ((Bj > Ai_1) && (Bj < Ai)) return Bj;

		if (Ai < Bj) {
			return findMedianSortedArraysHelper(A+i+1, m-i-1, B, j, k-i-1); 
		}
		else {
			return findMedianSortedArraysHelper(A, i, B+j+1, n-j-1, k-j-1);
		}
    }
};

int main() {
	int A[] = {2,5,6,7,8};
	int B[] = {1,3,4};
	cout << Solution().findMedianSortedArrays(A, 5, B, 3);
	system("pause");
}*/
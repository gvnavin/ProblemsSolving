/*
#include <iostream>
using namespace std;

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
		int low = 0;
		int high = n-1;
		while (low <= high) {
			int mid = low + (high-low)/2;
			if (A[mid] == target) {
				return mid;
			} else if (A[mid] < target) {
				low = mid+1;
			} else if (A[mid] > target) {
				if (mid-1>=0 && A[mid-1] < target) {
					return mid;
				} else {
					high = mid-1;
				}
			}
		}
		if (A[0] > target) return 0;
		if (A[n-1] < target) return n;
		return -1;
    }
};

int main() {
	int A[] = {1,3,5,6};
	int n = sizeof(A)/sizeof(int);
	cout << Solution().searchInsert(A, n, 5) << endl;
	cout << Solution().searchInsert(A, n, 2) << endl;
	cout << Solution().searchInsert(A, n, 7) << endl;
	cout << Solution().searchInsert(A, n, 0) << endl;
	system("pause");
}*/
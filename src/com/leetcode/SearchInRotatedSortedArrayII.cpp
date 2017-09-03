/*
#include <iostream>
using namespace std;

class Solution {
private:
    bool searchHelper(int A[], int low, int high, int target) {
		if (low > high) return false;

		int mid = low + (high-low)/2;
		if (A[mid] == target) return true;
		if (A[mid] > A[low]) {
			if (target < A[low] || target > A[mid]) {
				return searchHelper(A, mid+1, high, target);
			} else {
				return searchHelper(A, low, mid-1, target);
			}
		}

		else if (A[mid] < A[low]) {
			if (target < A[mid] || target > A[high]) {
				return searchHelper(A, low, mid-1, target);
			} else {
				return searchHelper(A, mid+1, high, target);
			}
		}

		else if (A[mid] == A[low]) {
			bool output = searchHelper(A, low, mid-1, target);
			if (output == false) {
				return searchHelper(A, mid+1, high, target);
			}
			return false;
		}
	}
public:
    bool search(int A[], int n, int target) {
		
		return searchHelper(A,0,n-1,target);
    }
};

int main() {
	int A[] = {1,3,1,1,1};
	int target = 3;
	bool output = Solution().search(A, sizeof(A)/sizeof(int), target);
}*/
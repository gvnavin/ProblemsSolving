/*
#include <iostream>
using namespace std;

class Solution {
private:
	int searchHelper(int A[], int low, int high, int target) {
		if (low > high) return -1;

		int mid = low + (high-low)/2;
		if (A[mid] == target) return mid;
		if (A[mid] > A[low]) {
			if (target < A[low] || target > A[mid]) {
				return searchHelper(A, mid+1, high, target);
			} else {
				return searchHelper(A, low, mid-1, target);
			}
		}

		if (A[mid] < A[high]) {
			if (target < A[mid] || target > A[high]) {
				return searchHelper(A, low, mid-1, target);
			} else {
				return searchHelper(A, mid+1, high, target);
			}
		}

		if (A[mid] == A[low]) {
			int output = searchHelper(A, low, mid-1, target);
			if (output == -1) {
				return searchHelper(A, mid+1, high, target);
			}
			return -1;
		}
	}
public:
    int search(int A[], int n, int target) {
		
		return searchHelper(A,0,n-1,target);
    }
};*/
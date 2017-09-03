/*
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        
		if (n == 0) return 0;

		int previousNumber = A[0];
		int writeIndex = 1;
		for (int i=1; i<n; ++i) {
			if (previousNumber == A[i]) continue;
			A[writeIndex] = A[i];
			previousNumber = A[i];
			++writeIndex;
		}
		return writeIndex;
    }
};*/
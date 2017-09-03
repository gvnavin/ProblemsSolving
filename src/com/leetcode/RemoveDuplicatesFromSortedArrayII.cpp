/*
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
		
		if (n == 0) return 0;

		int previousNumber = A[0];
		int previousNumberCount = 1;
		int writeIndex = 1;
		for (int i=1; i<n; ++i) {
			if (previousNumber == A[i] && previousNumberCount >= 2) continue;
			else if (previousNumber == A[i]) {
				A[writeIndex++] = A[i];
				++previousNumberCount;
			}
			else {
				A[writeIndex++] = A[i];
				previousNumber = A[i];
				previousNumberCount = 1;
			}
		}
		return writeIndex;
    }
};*/
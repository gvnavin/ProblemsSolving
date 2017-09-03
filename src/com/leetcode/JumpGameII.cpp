/*
#include <iostream>
using namespace std;

class Solution {
public:
    int jump(int A[], int n) {

		if (n == 1) return 0;
		if (A[0] == 0) return 0;
        
		int maxJump = A[0];
		int nextMaxJump = maxJump;
		int i = 1;
		int minimumJumps = 1;
		
		while (i <= maxJump && i<n) {
			if (nextMaxJump < A[i] + i) {
				nextMaxJump = A[i] + i;
			}
			if (i == maxJump) {
				if (nextMaxJump > maxJump && (i != n-1)) {
					++minimumJumps;
				}
				maxJump = nextMaxJump;
			}
			++i;
		}

		return minimumJumps;
    }
};

int main() {
	int A[] = {10,9,8,7,6,5,4,3,2,1,1,0};
	int n = sizeof(A)/sizeof(int);
	Solution().jump(A,n);
}*/
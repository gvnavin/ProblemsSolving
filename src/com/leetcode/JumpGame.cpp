// My solution looks like an O(n) solution but can be done better. I didn't take advantage of the fact that A[i] denotes maximum
// jump at that point. Maximum jump means that all other values between i+1 ... A[i]+i are automatically covered
/*
#include <iostream>
using namespace std;
class Solution {
public:
    bool canJump(int A[], int n) {
        
		int count = 0;
		bool* cache = new bool[n];
		memset(cache,0,sizeof(bool)*n);
		cache[0] = true;

		for (int i=1; i<n; ++i) {
			cache[i] = false;
			for (int j=i-1; j>=0; --j) {
				++count;
				if ((cache[j] == true) && (i-j) <= A[j]) {
					cache[i] = true;
					break;
				}
			}
		}
		bool output = cache[n-1];
		delete[] cache;
		return output;
    }
};*/

// This solution takes advantage of the fact that A[i] denotes maximum jump possible at the index
/*
#include <iostream>
using namespace std;

class Solution {
public:
    bool canJump(int A[], int n) {

		int maxJump = A[0];
		int i = 1;

		while (i <= maxJump && i<n) {
			if (maxJump < A[i] + i) maxJump = A[i] + i;
			++i;
		}

		return i>=n;
	}
};*/
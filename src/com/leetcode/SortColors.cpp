/*
#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(int A[], int n) {
		
		int redIndex = 0;
		int whiteIndex = 1;
		int blueIndex = n-1;

		while (redIndex < blueIndex && whiteIndex < blueIndex) {

			if (A[redIndex] == 0) {
				++redIndex;
			}
			else if (redIndex == whiteIndex) {
				++whiteIndex;
			}
			else if (A[whiteIndex] == 1) {
				++whiteIndex;
			}
			else if (A[blueIndex] == 2) {
				--blueIndex;
			}
			else {
				if (A[redIndex] == 2 && A[blueIndex] == 0) {
					A[redIndex] = 0;
					A[blueIndex] = 2;
				}
				else if (A[redIndex] == 1 && A[whiteIndex] == 0) {
					A[redIndex] = 0;
					A[whiteIndex] = 1;
				}
				else if (A[whiteIndex] == 2 && A[blueIndex] == 1) {
					A[whiteIndex] = 1;
					A[blueIndex] = 2;
				}
			}
		}
    }
};

int main() {
	int arr[] = {1,2,0};
	Solution().sortColors(arr, 3);
}*/
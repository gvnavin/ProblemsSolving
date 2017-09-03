/*
#include <iostream>
using namespace std;
class Solution {
public:
    //smaller code for the same problem:
int trap(int A[], int n) {
        int total = 0;
        int * R = (int*) malloc(n*sizeof(int));
        int * L = (int*) malloc(n*sizeof(int));
        int rmax = 0;
        int lmax = 0;
        for (int i =0; i <n; i++)
        {
            L[i] = lmax;
            if (lmax < A[i])
            {
                lmax = A[i];
            }
 
            R[n-i-1] = rmax;
            if (rmax < A[n-i-1])
            {
                rmax = A[n-i-1];
            }
        }
 
        for (int i =0; i <n; i++)
        {
 
            if (A[i] < min(R[i], L[i]))
            {
                total = total + min(R[i],L[i]) - A[i];
            }
        }
        return total;
    }
};

int main() {
	int A[] = {9,0,1,0,1,0,9};
	int n = sizeof(A)/sizeof(A[0]);
	cout << Solution().trap(A,n);
}*/
/*
#include <iostream>

class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if ((m+n) % 2 == 0) {
			int a = findKthSmallest(A, m, B, n, (m+n)/2);
			int b = findKthSmallest(A, m, B, n, ((m+n)/2)+1);
			return (double(a)+double(b))/2;
		} else {
			int a = findKthSmallest(A, m, B, n, ((m+n)/2)+1);
			return double(a);
		}
    }

	int findKthSmallest(int A[], int m, int B[], int n, int k) {
		
		int i = (int)((double)m / (m+n) * (k-1));
		int j = (k-1) - i;
 
		// invariant: i + j = k-1
		// Note: A[-1] = -INF and A[m] = +INF to maintain invariant
		int Ai_1 = ((i == 0) ? INT_MIN : A[i-1]);
		int Bj_1 = ((j == 0) ? INT_MIN : B[j-1]);
		int Ai   = ((i == m) ? INT_MAX : A[i]);
		int Bj   = ((j == n) ? INT_MAX : B[j]);
 
		if (Bj_1 < Ai && Ai < Bj)
			return Ai;
		else if (Ai_1 < Bj && Bj < Ai)
			return Bj;
  
		// if none of the cases above, then it is either:
		if (Ai < Bj)
			// exclude Ai and below portion
			// exclude Bj and above portion
			return findKthSmallest(A+i+1, m-i-1, B, j, k-i-1);
		else 
			// exclude Ai and above portion
			// exclude Bj and below portion
			return findKthSmallest(A, i, B+j+1, n-j-1, k-j-1);
	}
};



#include<iostream>
#include<cstdio>
#include<cmath>
#include<climits>
#include<cassert>
using namespace std;

int funchelp(int *arr1, int *arr2, int min,int max ,int k,int n) {
    while(min<=max) {
        int mid = (min+max)/2;
        int j = k -1 - mid - 1;
        int j_i = j+1;
        if(j>=n) min = mid +1;
        else {
            int a,b;
            a = (j >=0? arr2[j]: INT_MIN);
            b = (j_i<n ? arr2[j_i] : INT_MAX);
            if(a<=arr1[mid]&& arr1[mid]<=b)
                return mid;
            if(arr1[mid]<a)
                    min =  mid +1;
            else
                    max = mid -1;

            }
    }
    return -1;
}


int func(int *arr1, int m , int *arr2, int n,int k) {
    //assert(m>=0), assert(n>=0),assert(k>0) , assert(m+n>=k);
    int k = (m + n + 1)/2;
    if(n>=k) n = k;
    if(m>=k) m = k;

    int min = 0, max = m-1;
    int x   =  funchelp(arr1,arr2,min,max,k,n);
        if(x>=0) return arr1[x];
    min = 0; max = n -1;
        x =    funchelp(arr2,arr1,min,max,k,m);
        if(x>=0) return arr2[x];
        assert(0);
}*/
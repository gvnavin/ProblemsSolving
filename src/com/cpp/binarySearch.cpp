#include <iostream>
#include <string>
#define dbg(x) cout<< #x <<" --> " << x << endl ;

using namespace std;

int binarySearchFirst(int* a, int sz, int t);
int binarySearchLast(int* a, int sz, int t);

int main() {
	int a[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,6,6};
	int sz = sizeof(a)/sizeof(a[0]);
	dbg(sz);

	binarySearchFirst(a, sz, 1);
	binarySearchLast(a, sz, 1);
	dbg("=======================");

	binarySearchFirst(a, sz, 2);
	binarySearchLast(a, sz, 2);
	dbg("=======================");

	binarySearchFirst(a, sz, 3);
	binarySearchLast(a, sz, 3);
	dbg("=======================");

	binarySearchFirst(a, sz, 4);
	binarySearchLast(a, sz, 4);
	dbg("=======================");

	binarySearchFirst(a, sz, 5);
	binarySearchLast(a, sz, 5);
	dbg("=======================");

	binarySearchFirst(a, sz, 6);
	binarySearchLast(a, sz, 6);
	dbg("=======================");	
	
	return 0;
}

int binarySearchFirst(int* a, int sz, int t) {
	int b = 0;
	int e = sz-1;
	dbg(t);
	while(b < e) {
		    /*
    	    values = 1, 1
    	    pos =    0, 1
    	    b = 0
    	    e = 1
    	    int m = b + (e-b)/2;
    	    0 + (1-0)/2 = 0
    	    so it will pick the first
    	    so no need to add 1
    	    */
		int m = b + (e-b)/2;
		//dbg(b);
		//dbg(e);
		//dbg(m);
		if (a[m] < t) {
			b = m+1;
			//dbg("<");
			//dbg(b);
		} else if (a[m] > t) {
			e = m-1;
			//dbg(">");
			//dbg(e);	
		} else if (a[m] == t) {
			e = m;
			//dbg("=");
			//dbg(e);	
		}
	}
	dbg("ret");
	dbg(e);
	return e;
}

int binarySearchLast(int* a, int sz, int t) {
	int b = 0;
	int e = sz-1;
	dbg(t);
	while(b < e) {
	    /*
	    values = 1, 1
	    pos =    0, 1
	    b = 0
	    e = 1
	    int m = b + (e-b)/2;
	    0 + (1-0)/2 = 0
	    so it will not pick the last value
	    so 1 should be added
	    */
		int m = b + (e-b+1)/2;
		//dbg(b);
		//dbg(e);
		//dbg(m);
		if (a[m] < t) {
			b = m+1;
			//dbg("<");
			//dbg(b);
		} else if (a[m] > t) {
			e = m-1;
			//dbg(">");
			//dbg(e);	
		} else if (a[m] == t) {
			b = m;
			//dbg("=");
			//dbg(b);	
		}
	}
	dbg("ret");
	dbg(b);
	return b;
}
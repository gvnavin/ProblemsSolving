/*
#include <iostream>
using namespace std;

int **a = new int*[100];

void abc() {
	for (int i=0; i<100; ++i) {
		a[i] = new int[2];
		memset(a[i], 0, sizeof(int)*2);
	}
}

int maxTry(int n, int m) {
    if (m == 1) return n;
    if (n == 0) return 0;
    if (n == 1) return 1;
 
	if (a[n-1][m-1] != 0) return a[n-1][m-1];
    int min, i;
    min = n;
    for (i = 0; i < n; i++) {
        // if it is broken
        int x = maxTry(i, m - 1);
 
        // if it is not broken
        int y = maxTry(n-i-1, m);
 
        int t = x > y ? x : y;
        if (t < min) min = t;
    }
	a[n-1][m-1] = min + 1;
    return min + 1;
}

int main() {
	abc();
	int output = maxTry(100,2);
	system("pause");
}*/
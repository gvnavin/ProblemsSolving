/*
#include <iostream>

class Solution {
    
    int* cache;
    
public:
    int climbStairs(int n) {
        
        cache = new int[n+1];
        for (int i=0; i<=n; i++) {
            cache[i] = -1;
        }
        int output = climbStairsHelper(n);
        delete[] cache;
        return output;
    }
    
    int climbStairsHelper(int n) {
        
        if (cache[n] != -1) {
            return cache[n];
        }
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        int output = climbStairsHelper(n-1) + climbStairsHelper(n-2);
        cache[n] = output;
        return output;
    }
};

int main() {
	std::cout << Solution().climbStairs(10) << std::endl;
	system("pause");
}*/
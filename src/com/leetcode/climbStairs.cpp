class Solution {
public:
    int climbStairs(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n ==1) return 1;
        int r0 = 1;
        int r1 =1;
        
        for(int i = 2 ; i <=n ;i ++) {
            int temp = r0 + r1;
            r0 = r1;
            r1 = temp;
        }
        return r1;
    }
};
class Solution {
public:
    int sqrt(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int min = 0;
        int max = x;
        int ans = 0;
        long long mid;
        while(min <= max){
            mid = min + (max-min)/2;
            if(mid*mid == x) return (int)mid;
            else if(mid*mid > x){
                max = mid -1;
            }else {
                ans = mid;
                min = mid +1;
            }
        }
        
        return ans;
    }
};
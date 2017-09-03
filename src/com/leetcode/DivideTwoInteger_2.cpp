class Solution {
public:
    long long multiply(long long a , long long b) {
        long long ans =0;
        int i =0 ;
        while(b) {
            if(b&1) ans +=(a<<i);
            b>>=1;
            i++;
        }
        return ans;
    }
    int divide(int divi, int disi) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        long long div = divi;
        long long dis = disi;
        int sign =1;
            if(div<0) { sign = -1*sign; div*=-1;}
            if(dis< 0) {sign *=-1; dis*=-1;}

        long long a =0;
        long long min = 0;
        long long max = div;
        long long mid;
        
        while(min <= max) {
            mid = (min+max)/2;
            long long temp = multiply(mid,dis);
            if(temp > div) {
                max = mid-1;
            }else {
                min = mid+1;
                a =mid;
            }
        }
        return a*sign;
    }
};
class Solution {
public:
    double pow(double x, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==0) return 1;
        double y = pow(x,n/2);
        if(n%2==0){
            return y*y;
        }else {
            if(n>0)return y*y*x;
            else return y*y/x;
        }
        
    }
};
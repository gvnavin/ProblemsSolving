class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(x<0) return 0;
        if(x==0) return 1;
        long long i = 1;
        int c =1;
        
        while((i*=10)<=x) c++;
        i/=10;
        int k =1;
        while(k<c){
           int r = x /i;
           int s = x %10;
           if(r!=s) return false;
           x = x%i;
           x = x/10;
           i/=100;
           c--;
           k++;
        }
        
        return true;
    }
};
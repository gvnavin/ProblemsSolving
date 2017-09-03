class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(x < 0) return false;
        if(x==0) return true;
        
        long long i = 1;
        while((i*=10)<=x) ;
        i/=10;
        
        while(x!=0){
            if((x/i) != (x%10)) return false;
            x = (x%i)/10;
            i/=100;
        }
        
        return true;
    }
};
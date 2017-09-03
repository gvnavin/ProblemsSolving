class Solution {
public:
    int buck[10];
    
    int facto(int n){
        int fact = 1;
        for(int i =1; i<=n;i++){
            fact*=i;
        }
        return fact;
    }
    
    int getRank(int c) {
        int i = 1;
        int x =0;
        while((x+=buck[i]) <c ) {
            i++;
        }
        buck[i] = 0;
        return i;
    }
    string getPermutation(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        memset(buck,0,sizeof(buck));
        for(int i =1; i <=n; i++){
            buck[i]++;
        }    
        
        k--;
        string str;
        str.resize(n);
        int fact = facto(n-1);
        for(int i=0;i<n;i++) {
            int a = k/fact;
            k-= a*fact;
            str[i]= '0'+ getRank(a+1);
            if(fact != 1) fact = fact /(n-1-i);
        }
        return str;
    }
};
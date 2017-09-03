class Solution {
public:
    string longestPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!s.length()) return 0;
        int sz = 2*s.length()+1;
        char ch[sz +1];
        int ind = 0;
        for(int i =0; i < s.length() ;) {
            if(ind%2) {
                ch[ind++] = s[i++];
            }else {
                ch[ind++] = '#';
            }
        }
        ch[ind++]='#';
        ch[ind]=0;
        
        int p[sz];
        p[0]=0;
        p[1]=1;
        int maxi = 1;
        int maxp = 1;
        int maxind = 1;
        
         for(int i =2 ; i < sz; i++) {
            int j = 1;
            int max = 0;
            if(maxi + p[maxi] > i) {
                j = min(maxi+p[maxi] - i,p[2*maxi-i]); 
                max = j;
            }
            
            while(i-j>=0 && i+j <sz && ch[i-j] == ch[i+j]) {
                max = j;
                j++;
            }
            
            p[i] = max;
            if(p[i]+i > p[maxi] + maxi) {
                maxi = i;
            }
            
            if(maxp < p[i]) {
                maxind = i;
                maxp = p[i];
            }
        }
        
        if(maxind%2) return s.substr((maxind-1)/2-(maxp-1)/2,maxp);
        else return s.substr((maxind-1)/2-(maxp/2-1),maxp);
    }
};
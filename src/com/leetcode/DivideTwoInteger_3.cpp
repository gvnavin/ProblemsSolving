class Solution {
public:
    int maxbit(int x) {
        int pos = -1;
        for(int i =0; i<=31;i++){
            if(x&1<<i){
                pos = i;
            }
        }
        return pos;
    }
    int divide(int divi, int disi) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
       long long div  = divi;
       long long dis  =  disi;
       int sign  = 1;
       if(div < 0) {
           div = -div;
           sign*=-1;
       }
       if(dis < 0) {
           dis = -dis;
           sign*=-1;
       }
       
       int ans = 0;
       int m1,m2;
       m1 = maxbit(div);
       m2 = maxbit(dis);
       int diff = m1-m2;
       while(div>=dis){
        if(dis<<diff <= div) {
            ans+=1<<diff;
            div-=dis<<diff;
        }
        diff--;
       } 
        return ans*sign;
    }
};
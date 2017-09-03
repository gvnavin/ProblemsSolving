class Solution {
public:
    int divide(int divi, int disi) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sign = 1;
        long long div,dis;
        div = divi;
        dis = disi;
        
        sign = div < 0 ? sign*-1 : sign;
        sign = dis < 0 ? sign*-1 : sign;
        div = abs(div);
        dis =  abs(dis);
        int ans = 0;
        //if(dis ==1) return div*sign;
        
        while(div >= dis) {
            long long val =  dis;
            int q = 1;
            while(div >= val+val){
                val +=val;
                q<<=1;
            }
            ans +=q;
            div-=val;
        }
        
        return ans*sign;
    }
};
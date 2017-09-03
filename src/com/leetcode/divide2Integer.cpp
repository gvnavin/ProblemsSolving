class Solution {
public:
    int HeightSetBit(int a){
        for(int i =31; i>=0; i--){
            if(a&1<<i) return i;
        }
    }

    int divide(int divi, int disi) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool add = false;
        if(disi == 0x80000000 && divi == 0x80000000) return 1;
        if(disi == 0x80000000) return 0;
        
        if(divi == 0x80000000){
            divi+=1;
            add = true;
        }
        
        int div = divi;
        int dis = disi;
        int sign = 1;
        if(div < 0) {
            div = abs(div);
            sign*=-1;
        }
        if(dis < 0) {
            dis = abs(dis);
            sign*= -1;
        }
        
        int m = HeightSetBit(div);
        int n = HeightSetBit(dis);
        int diff = m -n;
        int ans=0;
        while(div >=dis){
            if(dis<<diff <=div){
                ans+=1<<diff;
                div -= dis <<diff;
            }
            diff--;
        }
        if(div == dis -1 && add) ans++;
        return ans*sign;
    }
};
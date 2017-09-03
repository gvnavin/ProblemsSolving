class Solution {
public:
    int romanToInt(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int len = s.length();
		if(!len) return 0;
		int ans = 0;
		for(int i =0; i<len ;){
			if(s[i] == 'I'){
				if(i<len-1 && s[i+1] == 'X'){
					ans+=9;
					i+=2;
				}else if(i<len-1 && s[i+1] == 'V'){
					ans+=4;
					i+=2;
				}else {
					ans+=1;
					i+=1;
				}
			}else if(s[i] == 'V'){
				ans+=5;
				i+=1;
			}else if(s[i] == 'X'){
				if(i<len-1 && s[i+1] == 'C'){
					ans+=90;
					i+=2;
				}else if(i<len-1 && s[i+1] == 'L'){
					ans+=40;
					i+=2;
				}else {
					ans+=10;
					i+=1;
				}			
			}else if(s[i] == 'L') {
				ans+=50;
				i+=1;
			}else if(s[i] == 'C') {
				if(i<len-1 && s[i+1] == 'M'){
					ans+=900;
					i+=2;
				}else if(i<len-1 && s[i+1] == 'D'){
					ans+=400;
					i+=2;
				}else {
					ans+=100;
					i+=1;
				}
			}else if(s[i] == 'D') {
				ans+=500;
				i+=1;
			}else {
				ans+=1000;
				i+=1;
			}
	}
	}
};
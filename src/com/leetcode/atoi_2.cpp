class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans = 0;
		int s,e;
		s = 0; e = strlen(str);
		while(str[s] == ' ') s++;
		while(str[e] == ' ') e++;
		if(s>e) return ans;
		int sign = 1;
		if(str[s] == '+' || str[s] == '-'){
			if(str[s] == '-' )
				sign*=-1;
			s++;
		}
        int c = 0;
		for(int i =s; i <=e ;i++) {
			if(str[i] >= '0' && str[i] <= '9'){
				c++;
                if(c==11||(c==10&&(ans>214748364||(ans==214748364&&(str[i] - '0' >=8))))){
                    if(sign == -1) return INT_MIN;
                    return INT_MAX;
                }
                ans*=10;
				ans+= str[i] - '0';
			}else {
				break;
			}
		}
		
		return sign*ans;
    }
};

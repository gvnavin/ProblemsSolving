class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    	long long ans = 0;
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
		for(int i =s; i <=e ;i++) {
			if(str[i] >= '0' && str[i] <= '9'){
				ans*=10;
				ans+= str[i] - '0';
			}else {
				break;
			}
			if(sign *ans > INT_MAX) return INT_MAX;
			if(sign*ans < INT_MIN) return INT_MIN;
		}
		
		return sign*ans;
    }
};

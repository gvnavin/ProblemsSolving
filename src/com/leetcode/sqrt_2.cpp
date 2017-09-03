class Solution {
public:
    int sqrt(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int min = 0;
		int ans = 0;
		for(int i = 15; i >=0; i--){
			int temp = 1 << i;
			if(temp*temp <= x){
				ans+=temp;
				x-=temp*temp;
			}
		}
        
        return ans;
    }
};
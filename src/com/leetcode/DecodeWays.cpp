class Solution {
public:
    int numDecodings(string arr) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = arr.length();
        if(!len) return 0;
        int ans[len+1];
        ans[len]=1;
        if(arr[len-1] == '0') ans[len-1] = 0;
        else ans[len-1] = 1;
        for(int i = len -2; i>=0; i--) {
            if(arr[i] == '0') {
                ans[i] = 0;
            }else if(arr[i] == '1'||(arr[i] =='2' && arr[i+1] <='6' )) {
                ans[i] = ans[i+1] + ans[i+2];
            }else {
                ans[i]=ans[i+1];
            }
        }
        return ans[0];
    }
};
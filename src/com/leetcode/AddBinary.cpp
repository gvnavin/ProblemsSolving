class Solution {
public:
    string addBinary(string a, string b) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string ans;
        if(a.length() > b.length()) {
            ans = helper(a,b);
        }else {
            ans =  helper(b,a);
        }
        return ans;
    }
    
    string helper(string a,string b) {
        int len1,len2;
        len1 = a.length();
        len2 = b.length();
        int carry = 0;
        int i;
        for(i = 1; i <=len2; i++) {
            int temp = a[len1 -i] -48 + b[len2 -i] - 48 + carry;
            a[len1-i] = 48 + (temp)%2; 
            carry = temp /2;
        }
        while(i<=len1) {
            int temp = a[len1 -i] -48 + carry;
            a[len1-i] = 48 + (temp)%2; 
            carry = temp /2;
            i++;
        }
        
        if(carry) return "1" + a;
        return a;
    }
};
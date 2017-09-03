class Solution {
public:
    string multiply(string num,char c) {
        if(c == '0') return "0";
        int carr = 0;
        for(int i = num.length()-1; i >=0; i--){
            int x = (num[i] - '0')*(c -'0') + carr;
            num[i] = '0' + x%10;
            carr  = x/10;
        }
        if(carr) num = char(carr + '0') + num;
        return num;
    }

    string multiply(string num1, string num2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(num1[0] == '0' || num2[0] == '0') return "0";
        string cache[10];
        string res(num1.length()+num2.length(),'0');
        int j = res.length() -1;
        for(int i=num2.length() -1; i>=0; i-- ){
                string str ;
                if(cache[num2[i]-'0'].length()<=0){
                    cache[num2[i]-'0'] = multiply(num1,num2[i]);
                }
                str = cache[num2[i] - '0'];
           int k = str.length() -1;
           int l = j;
           int c = 0;
           while(k>=0) {
               int x = res[l] + str[k] - '0' - '0' +c;
               res[l] = '0' + x%10;
               c = x/10;
               k--;
               l--;
           }
           while(c>0) {
              int x = res[l] - '0' +c;
               res[l] = '0' + x%10;
               c = x/10;
               l--;
           }
           
           j--;
        }
        if(res[0] == '0') res.erase(res.begin());
        return res;
    }
};
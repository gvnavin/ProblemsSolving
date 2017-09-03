class Solution {
public:
    string intToRoman(int num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function   
        char roman[4][10][5] =
        {
                        "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                        "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC",
                        "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
                        "", "M", "MM", "MMM", "  ", " ", "  ", "   ", "    ", "  "
        };
        string s;
        int dig = 1;
        int m = 1;
        while((m*=10) <= num )
            ++dig;
        
        while((m/=10)>0) {
            s += string(roman[--dig][num/m]);
            num = num%m;
        }
        return s;
    }
};
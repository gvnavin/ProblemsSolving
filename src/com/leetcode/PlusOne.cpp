class Solution {
public:
    vector<int> plusOne(vector<int> &dig) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sz = dig.size();
        if(!sz) {
            dig.push_back(1);
            return dig;
        }
        int c =0;
        dig[sz-1]+=1;
        for(int i = sz -1;i>=0;i--){
            int x = dig[i] + c;
            dig[i] = x %10;
            c = x/10;
        }
        
        if(c>0) dig.insert(dig.begin(),c);
        return dig;
    }
};
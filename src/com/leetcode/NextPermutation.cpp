class Solution {
public:
    void nextPermutation(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sz = num.size();
        if(!sz) return;
        int i;
        int j;
        
        for(i=sz -2; i>=0;i--){
            if(num[i+1] > num[i]) break;
        }
        if(i>=0){
            for( j = sz-1;j >=i+1;j--){
                if(num[j] > num[i]) break;
            }
            swap(num[j],num[i]);
        }
        
        i++;
        j=sz -1;
        while(i<j){
            swap(num[i],num[j]);
            i++;j--;
        }
    }
};
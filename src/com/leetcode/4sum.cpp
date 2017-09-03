class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> >ans;
        if(num.size() <4) return ans;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size()-3;) {
            for(int  j =i+1; j < num.size()-2; ) {
                int k = j+1;
                int r = num.size() -1;
                while(k<r) {
                    int sum = num[i]+num[j]+num[k]+num[r] -tar;
                    if(sum >  0) {
                        r--;
                    }else if(sum <0){
                        k++;
                    }else {
                        vector<int> temp;
                        temp.push_back(num[i]);
                        temp.push_back(num[j]);
                        temp.push_back(num[k]);
                        temp.push_back(num[r]);
                        ans.push_back(temp);
                        r--;
                        while(r>0 && num[r+1] == num[r]) r--;
                        k++;
                        while(k<num.size() && num[k-1] == num[k]) k++;
                    }
                }
                j++;
                while(j<num.size() && num[j-1] == num[j]) j++;
            }
            i++;
            while(i<num.size() && num[i-1] == num[i]) i++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(),num.end());
        vector<vector<int> > ret;
        for(int i =0; i < (int)num.size() -2;  ) {
            int j = i+1;
            int k = num.size() -1;
            while(j<k) {
                if(num[j] + num[i] + num[k] > 0) {
                    k--;
                }else if(num[i] + num[j] + num[k] < 0){
                    j++;
                }else {
                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[j]);
                    temp.push_back(num[k]);
                    ret.push_back(temp);
                    j++;
                    while(j < (num.size() -1) && num[j-1] == num[j]) j++;
                    k--;
                    while(k > 0 && num[k+1] == num[k]) k--;
                }
            }
            i++;
            while(i < (num.size() -2) && num[i-1] == num[i]) i++;
        }
        
        return ret;
    }
};
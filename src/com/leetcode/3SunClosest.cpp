class Solution {
public:
    int threeSumClosest(vector<int> &num, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        assert(num.size()>=3);
        sort(num.begin(),num.end());
        int min = abs(num[0] + num[1] + num[2] - tar);
        int number = num[0] + num[1] + num[2];
        for(int  i = 0 ;i < (int) num.size() -2 ; i++) {
            int j = i+1;
            int k = num.size() -1;
            while(j < k ) {
                  
                  if(abs(num[i] + num[j] + num[k] - tar) < min){
                        min = abs(num[i] + num[j] + num[k] - tar);
                        number = num[i] + num[j] + num[k];
                    }
                    
                if(num[i] + num[j] + num[k] > tar) {
                    k--; 
                }else if(num[i] + num[j] + num[k] < tar){
                    j++;
                }else {
                    break;
                }
            }
        }
        return number;
    }
};
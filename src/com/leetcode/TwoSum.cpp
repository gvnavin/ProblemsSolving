    struct node {
        int ind;    
        int val;
    };
    
bool func (node a, node b ){
    return a.val < b.val;
}

class Solution {
public:
    
    vector<int> twoSum(vector<int> &num, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ret(2);
        if(num.size()<2) return ret;
        ret[0]= ret[1] = -1;
        
        node arr[num.size()];
        for(int i=0; i< num.size() ;i++){
            arr[i].val = num[i];
            arr[i].ind = i;
        }
        sort(arr,arr+num.size(),func);
        
        int i,j;
        i =0; j =num.size() -1;
        
        while(i<j){
            if(arr[i].val + arr[j].val ==tar){
                ret[0]=arr[i].ind+1;
                ret[1]=arr[j].ind+1;
                if(ret[0] > ret[1]) swap(ret[0],ret[1]);
                return ret;
            }else if(arr[i].val + arr[j].val >tar){
                j--;
            }else  {
                i++;
            }
        }
     return ret;
    }
};
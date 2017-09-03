class Solution {
public:
    vector<int> getNext(vector<int>temp) {
        int sz = temp.size();
        if(sz <=1) return  temp;
        int i;
        int j;
        for( i =sz-2; i >=0; i--){
            if(temp[i+1] > temp[i]) break;
        }
        
        if(i>=0) {
            for( j = sz-1; j>=i+1;j--){
                if(temp[i] < temp[j]){
                    swap(temp[i],temp[j]);break;
                }
            }
        }
        i++;
        j = sz-1;
        while(i<j){
            swap(temp[i],temp[j]);
            i++;
            j--;
        }
        return temp;
    }


    vector<vector<int> > permuteUnique(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        int sz = num.size();
        if(!sz) return ans;
        ans.push_back(num);
        vector<int> temp;
        int i =0;
        while( (temp = getNext(ans[i]))!=ans[0]){
            ans.push_back(temp);
            i++;
        }
        
        return ans;
        
    }
};
struct node {
 int a,b,val;
} ;

bool func(node x, node y) {
    return x.val < y.val;
}

void func2(node arr[],int i, int j,set<vector<int> > &Set,vector<int> &num) {
    vector<int> temp;
    if(arr[i].a != arr[j].a && arr[i].a !=arr[j].b && arr[i].b != arr[j].a && arr[i].b !=arr[j].b){
        temp.push_back(num[arr[i].a]);
        temp.push_back(num[arr[i].b]);
        temp.push_back(num[arr[j].a]);
        temp.push_back(num[arr[j].b]);
        sort(temp.begin(),temp.end());
        Set.insert(temp);
    }
}

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int tar) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        set<vector<int> > Set;
        if(num.size() < 4) return ans;
        int sz =  num.size();
        int newSz = sz*(sz-1)/2;
        int count = 0;
        node arr[newSz];
        for(int i =0; i< num.size();i++) {
            for(int  j= i+1;j<num.size(); j++ ) {
                node x;
                x.a = i; x.b = j; x.val = num[i] +  num[j];
                arr[count++] =x;
            }
        }
        
        sort(arr,arr+count,func);
        int i = 0;
        int  j = count-1;
        while(i < j) {
            int val = arr[i].val + arr[j].val;
            if(val > tar) {
                j--;
            }else if(val < tar) {
                i++;
            }else {
                int x = i;
                int y = j;
                func2(arr,x,y,Set,num);
                x++;
                while(arr[x].val == arr[x-1].val)  {
                    func2(arr,x,j,Set,num);
                    x++;
                }
                y++;
                while(arr[y].val == arr[y-1].val)  {
                    func2(arr,i,y,Set,num);
                    y++;
                }
                
                i++;
                j--;
            }
        }
        vector<vector<int> > ans1(Set.begin(),Set.end());
        return ans1;
    }
};
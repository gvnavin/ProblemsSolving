class Solution {
public:
    struct node {
        int pos;
        int h;
    };

    int maxRect(vector<int> arr){
     
     arr.push_back(-1);
     stack<node> stk;
     node temp ;
     temp.h=0, temp.pos=0;
     stk.push(temp);
     
     int ans =0;
     for(int  i=0;i<arr.size();i++) {
         temp.h = arr[i];
         temp.pos = i;
         if(stk.top().h <= arr[i] ) {
             stk.push(temp);
         }else {
             while(stk.size() && stk.top().h > temp.h){
                 node temp2 = stk.top();
                 temp.pos = temp2.pos;
                 stk.pop();
                 
                 if(ans < temp2.h*(i-temp2.pos)){
                     ans = temp2.h*(i-temp2.pos);
                 }
             }
             stk.push(temp);
         }
     }
     return ans;
    }


    int maximalRectangle(vector<vector<char> > &mat) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = mat.size();
        if(!n) return 0;
        int m = mat[0].size();
        
        vector<vector<int> > arr(n);
        for(int i =0; i <n; i++){
            arr[i].resize(m);
        }
        
        for(int i=0;i<m;i++){
            if(mat[n-1][i] == '1') 
             arr[n-1][i] = 1;
             else 
             arr[n-1][i] = 0;
        }
        int ans =0;
        
        for(int i = n-2; i>=0; i--) {
            for(int j = 0; j <m; j++){
                if(mat[i][j] !='0')
                    arr[i][j]=arr[i+1][j]+1;
                else 
                    arr[i][j] =0;
            }
        }
        
        
        for(int i = 0 ;i <n; i++) {
            int x = maxRect(arr[i]);
            ans = max(ans,x);
        }
        
        return ans;
    }
};
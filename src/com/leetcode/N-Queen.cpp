class Solution {
public:
    int *arr;
    vector<vector<string> >ans;
    vector<vector<string> > solveNQueens(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        arr = new int[n+1];
        memset(arr,0,sizeof(int)*(n+1));
        ans.clear();
		solve(1,n);
        return ans;
    }
    
	    void solve(int a,int n){
        for(arr[a] =1;arr[a]<=n;arr[a]++) {
            if(valid(a)){
                if(a==n) {
                    Insert(n);
                }else {
                    solve(a+1,n);
                }
            }
        }
    }
    
	bool valid(int a) {
        int  j =1;
        while((arr[j]!=arr[a]) && (abs(arr[j]-arr[a])!=abs(j-a))) j++;
        return a==j?true:false;
    }
    
    void Insert(int n) {
        string str;
        vector<string> temp;
        for(int i= 1;i<=n;i++){
            str = "";
            for(int j=1;j<=n;j++){
                if(arr[i]==j){
                    str+="Q";
                }else {
                    str+='.';
                }
            }
            temp.push_back(str);
        }
        ans.push_back(temp);
    }
    
};
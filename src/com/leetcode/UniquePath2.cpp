class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int> > &grid) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = grid.size();
        int m = grid[0].size();
        int **arr = new int*[n];
        for(int i=0;i<n;i++) {
           arr[i] = new int[m];
           memset(arr[i],-1,sizeof(int) * m);
        }
        
        return helper(n-1,m-1,grid,arr);
    }
    
    int helper(int n,int m,vector<vector<int> > &grid,int **arr ){
        if(n==0 && m==0) return !grid[n][m] ;
        int &ret = arr[n][m];
        if(ret !=-1) return ret ;
        
        if(grid[n][m]) return ret =0 ;
        
        if(n==0) return ret =   helper(n,m-1,grid,arr);
                 
        if(m==0) return ret =  helper(n-1,m,grid,arr) ;
            
        ret = helper(n,m-1,grid,arr)+ helper(n-1,m,grid,arr);
        
        return ret ;
        
        
    }
};
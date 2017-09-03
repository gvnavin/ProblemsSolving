class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        if(!n) return ans;
        vector<int> temp(n);
        for(int i =0; i <n; i++)
        ans.push_back(temp);
        helper(n,n,0,ans,1);
        return ans;
    }
    
        void helper(int n, int m ,int k,vector<vector<int> > &mat,int num){
		if(!n || !m) return ;
		if(n ==1) {
			for(int i =0;i < m; i++) mat[k][i+k] = num++;
			return ;
		}
		if(m==1) {
			for(int i =0;i < n; i++) mat[i+k][k] = num++;
			return ;
		}
		for(int i =0; i<m-1; i++)
		    mat[k][k+i] = num++;
		for(int i =0; i<n-1; i++)
			mat[k+i][k+m-1] = num++;
		for(int i = m-1; i>0; i--) 
			mat[n-1+k][i+k] = num++;
		for(int i= n-1;i >0 ; i--)
			mat[i+k][k] = num++;
		n-=2;
		m-=2;
		k++;
		helper(n,m,k,mat,num);
    }

};
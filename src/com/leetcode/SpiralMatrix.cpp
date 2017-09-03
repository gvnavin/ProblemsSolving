class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &mat) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
      vector<int> ans;
      int n,m;
	  n = mat.size();
	  if(!n) return ans;
	  m = mat[0].size();
	  helper(n,m,0,mat,ans);
	  return ans;
    }
	void helper(int n, int m ,int k,vector<vector<int> > &mat,vector<int> &ans){
		if(!n || !m) return ;
		if(n ==1) {
			for(int i =0;i < m; i++) ans.push_back(mat[k][i+k]);
			return ;
		}
		if(m==1) {
			for(int i =0;i < n; i++) ans.push_back(mat[i+k][k]);
			return ;
		}
		for(int i =0; i<m-1; i++)
			ans.push_back(mat[k][k+i]);
		for(int i =0; i<n-1; i++)
			ans.push_back(mat[k+i][k+m-1]);
		for(int i = m-1; i>0; i--) 
			ans.push_back(mat[n-1+k][i+k]);
		for(int i= n-1;i >0 ; i--)
			ans.push_back(mat[i+k][k]);
		n-=2;
		m-=2;
		k++;
		helper(n,m,k,mat,ans);
    }

};

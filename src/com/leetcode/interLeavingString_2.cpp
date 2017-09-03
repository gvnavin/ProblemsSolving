class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(s1.length() + s2.length() != s3.length()) return false;
    	int **arr = new int*[s1.length()+1];
		for(int i =0; i <=s1.length(); i++ ) {
			arr[i] = new int[s2.length()+1];
			memset(arr[i],-1,sizeof(int)*(s2.length()+1));
		}
        return helper(s1,0,s2,0,s3,0,arr);    
    }
    
    int helper(string &s1, int l1, string &s2, int l2, string &s3 ,int l3, int **arr) {
        if(l1 == s1.length() && l2 == s2.length() && l3 == s3.length()) return 1;

        
		 int &ret = arr[l1][l2];
		 if(ret !=-1) return ret;
         ret = 0;
		 
        if(l1 < s1.length() && s1[l1] == s3[l3]) {
            if(helper(s1,l1+1,s2,l2,s3,l3+1,arr))
            return ret = 1;
        }
        
        if(l2 < s2.length() && s2[l2] == s3[l3]) {
            if(helper(s1,l1,s2,l2+1,s3,l3+1,arr))
            return ret = 1;
        }
        
        return ret = 0;
    }
};
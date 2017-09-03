class Solution {
public:
    int minimumTotal(vector<vector<int> > &tri) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int r = tri.size();
        for(int i = r -2; i >=0; i--){
            int c = tri[i].size();
            for(int j = 0; j < c; j++){
                tri[i][j]+= min(tri[i+1][j],tri[i+1][j+1]);
            }
        }
        return tri[0][0];
        
    }
};
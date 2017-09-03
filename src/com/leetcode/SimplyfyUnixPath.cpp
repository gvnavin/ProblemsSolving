class Solution {
public:
    string simplifyPath(string path) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = path.length();
        assert(path[0] == '/');
        int i,j;
        i=1;
        j=0;
        while(i < len){
           while(i<len && path[i] == '/') i++;
           int k = i;
           if(i==len) break;
           while(i<len && path[i]!= '/') {
            i++;
           } 
           string str = path.substr(k,i-k);
           if(str == "." ) continue;
           else if(str == "..") {
               if(j>0){
               j--;
               while(path[j]!='/') j--;
               }
           }else {
            while(k<=i)
               path[++j] = path[k++];
           }
        }
        if(j>0) j-=1;
        return path.substr(0,j+1);
    }
};
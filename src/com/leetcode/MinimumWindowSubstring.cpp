class Solution {
public:
    string minWindow(string S, string T) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = T.length();
        string str = "";
        int ans = S.length()+1;
        if(!len) return 0;
        int arr[256];
        int Map[256];
        memset(arr,0,sizeof(arr));
        memset(Map,0,sizeof(Map));
        
        for(int i =0; i <len ; i++) {
            arr[T[i]]++;
        }
        
        int p1 = 0;
        int count = 0;
        for(int i =0; i<S.length();i++){
            if(arr[S[i]]>0){
                Map[S[i]]++;
                if(Map[S[i]]<=arr[S[i]]){
                    count++;
                }
                if(count == len) {
                    while(arr[S[p1]] == 0 || arr[S[p1]] < Map[S[p1]]){
                        if(Map[S[p1]]) Map[S[p1]]--;
                        p1++;
                    }
                    if(ans > i-p1+1){
                        ans = i-p1+1;
                        str = S.substr(p1,ans);
                     }
                    
                }
            }
        }
        
        return str;
    }
};
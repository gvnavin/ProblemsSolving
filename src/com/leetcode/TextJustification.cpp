class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> ans;
        int sz = words.size();
        if(!sz) return ans;
        int i = 0;
        int tl , wl, sp;
        while(i<sz){
            int  k  = i;
            tl = 0;
            wl =0;
            sp =0;
            string str;
                while(k<sz && tl <=L+1){
                    if(words[k].size()){
                        tl+=words[k].length();
                        tl+=1;
                        wl += words[k].length();
                        sp +=1;
                    }
                    if(tl <=L+1) k++;
                }
                if(k == sz){
                   for(int j = i; j<k ;j++){
                        if(words[j].length()){
                            str+= words[j];
                            if(j!=k-1) str +=" ";
                        }
                   } 
                   while(str.length() <L) str+=" ";
                }else {
                  wl-=words[k].length();
                   sp-=2;
                   double diff = L -wl;
                    for(int j = i; j <k ; j++){
                        str+= words[j];
                        if(words[j].length() && sp){
                            int x = ceil(diff/sp);
                            diff-=x;
                            sp--;
                            while(x){
                                str+=" ";
                                x--;
                            }
                        }
                     }
                    while(str.length() <L) str += " ";
                }
            i = k;
            ans.push_back(str);
        }
        return ans;
    }
};
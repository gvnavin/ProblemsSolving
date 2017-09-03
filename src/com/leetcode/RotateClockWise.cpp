class Solution {
public:
    pair<int,int> getNextPos(pair<int,int> curr, int n){
      if(curr.first == 0 ){
            if(curr.second == n-1) return pair<int,int>(1,n-1);
            curr.second+=1; return curr;

        }else if(curr.first = n-1){
            if(curr.second == 0) return pair<int,int>(n-2,0);
            curr.second-=1; return curr;

        }else if(curr.second == n-1){
            if(curr.first == n-1) return pair<int,int>(n-1,n-2);
            curr.first+=1;  return curr;
        }
        else {
            if(curr.first == 0) return pair<int,int>(0,1);
            curr.first-=1; return curr;
        }
    }

    pair<int,int> getNext(pair<int,int> p, int n){
        if(p.first == 0) {
            p.first = p.second;
            p.second = n-1;
        }else if(p.second == 0){
            p.second = n-1-p.first;
            p.first = 0;
        }else if(p.first == n-1) {
            p.first = p.second;
            p.second = 0;
        }else {
            p.second = n -1 - p.first;
            p.first = n-1;
        }
        return p;
    }
    
    
    void rotate(vector<vector<int> > &mat) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = mat.size();
        if(n<=1) return ;
        int k = 0;
        while(n>1) {
            int tot = 4*(n-1);
            pair<int,int> rem,curr;
            int item,nextItem;
            rem = curr = pair<int,int>(0,0);
            item = mat[k][k];
            while(tot--){
                pair<int,int> next = getNext(curr,n);
                nextItem = mat[next.first +k ][next.second+k];
                mat[next.first+k][next.second+k] = item;
                item = nextItem;
                curr = next;
                if(curr == rem) {
                    rem = curr = getNextPos(curr,n);
                    item = mat[rem.first +k ][rem.second +k];
                }
            }
            k++;
            n-=2;
        }
    }
};
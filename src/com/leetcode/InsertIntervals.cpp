/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    bool overlaps(vector<Interval> &inv,int j,int k) {
        if(inv[j].end >= inv[k].start) return true;
        else return false;
    }
    
    vector<Interval> insert(vector<Interval> &inv, Interval newInt) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sz = inv.size();
        inv.push_back(newInt);
        if(!sz) {
            return inv;
        }
        
        int i = 0 ;
        for( ;i < sz; i++ ) {
            if(inv[i].start > newInt.start) break;
        }
        
        for(int j = sz -1 ; j >=i ; j--) {
            inv[j+1] = inv[j];
        }
    
        inv[i] = newInt;
        int k = i>0 ? i-1: i;
        int j = k;
        k++;
        
        int newsz = sz +1;
        
        for( ;k < sz+1; k++) {
            if(overlaps(inv,j,k)) {
                int ma = max(inv[j].end,inv[k].end);
                int mi = min(inv[j].start, inv[k].start);
                inv[j].start = mi;
                inv[j].end = ma;
                newsz--;
            }else {
                inv[++j] = inv[k];
            }
        }
        
        while(inv.size()!=newsz) {
            inv.pop_back();
        }
        return inv;
    }
};
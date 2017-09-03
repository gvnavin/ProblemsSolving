/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool func(Interval a,Interval b) {
     return a.start < b.start;
 }
class Solution {
public:
    bool overlaps(vector<Interval> & inv, int i ,int j) {
        if(inv[i].end >= inv[j].start) return true;
        else false;
    }
    vector<Interval> merge(vector<Interval> &inv) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(inv.begin(),inv.end(),func);
        int sz = inv.size();
        if(!sz) return inv;
        int j = 0;
        int newSz = sz;
        for(int i =1 ;i <sz; i++){
            if(overlaps(inv,j,i)){
                inv[j].end = max(inv[i].end,inv[j].end);
                inv[j].start = min(inv[i].start,inv[j].start);
                newSz--;
            }else {
                inv[++j]=inv[i];
            }
        }
        
        inv.resize(newSz);
        return inv;
    }
};
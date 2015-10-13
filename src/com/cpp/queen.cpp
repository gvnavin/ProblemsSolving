#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <queue>
#include <climits>

#define dbg(x) cout<< #x <<" --> " << x << endl ;
#define PB push_back
#define MP make_pair
#define FF first
#define SS second

using namespace std;

int maxThreats(vector < int > a);

int main() {
        
        vector<int> v;
        v.PB(2);
        v.PB(3);
        v.PB(1);
        cout << maxThreats(v);            
        return 0;
}

int maxThreats(vector < int > a) {

        int sz = a.size();        
        //dbg(sz);
        cout <<"sz = " <<sz << endl;

        for(int i = 0; i < sz; i++) {
                a[i] = a[i] - 1;        
        }

        int brd[100][100];
        int trt[100][100];
        for(int i = 0; i < 100; i++) {
                for(int j = 0; j < 100; j++) {
                        brd[i][j] = 0;
                        trt[i][j] = 0;
                }
        }
           
        for(int i = 0; i < sz; i++) {
                brd[i][a[i]] = 1;
        }
        
        for(int i = 0; i < sz; i++) {
                int j = a[i];
                
                //int x[] = {0,  -1, -1, -1, 0, +1, +1, +1};
                //int y[] = {-1, -1,  0, +1, +1, -1,  0, +1};
                
                //<--, left (0,-1)
                for(int oi=i,oj=j-1; oj >= 0; oj--) {
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }       
                
                //-->, right
                for(int oi=i,oj=j+1; oj < sz; oj++) {
                while (oj < sz) {
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }
                
                //up
                for(int oi=i-1,oj=j; oi >= 0; oi--) { 
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }
                
                //down
                for(int oi=i+1,oj=j; oi < sz; oi++) { 
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }
                
                // -,-
                for(int oi=i-1,oj=j-1; oi >= 0 && oj >= 0; oi--,oj--) { 
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }
                
                // +,+
                for(int oi=i+1,oj=j+1; oi < sz && oj < sz; oi++,oj++) { 
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }

                // -,+
                for(int oi=i-1,oj=j+1; oi >= 0 && oj < sz; oi--,oj++) {
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }
                
                // +,-
                for(int oi=i+1,oj=j-1; oi < sz && oj >= 0; oi++,oj--) {
                        if (brd[oi][oj] == 1) {
                            trt[oi][oj]++;
                            trt[i][j]++;
                            break;
                        }
                }       
        }
        /*
        for(int i = 0; i < sz; i++) {
                for(int j = 0; j < sz; j++) {
                        cout << brd[i][j] << " ";
                }
                cout << endl;
        }
        */
        int mxCnt = 0;
        for(int i = 0; i < sz; i++) {
                for(int j = 0; j < sz; j++) {
                         if (brd[i][j] == 1) { 
                                //cout << trt[i][j] << " ";
                                mxCnt = max(mxCnt, trt[i][j]);
                                //assert(trt[i][j]%2 == 0);
                        }
                        
                }
                cout << endl;
        }
        

        
        cout <<"mxCnt = " <<mxCnt << endl;
        mxCnt = mxCnt/2;
        cout <<"mxCnt = " <<mxCnt << endl;
        return mxCnt;
}

































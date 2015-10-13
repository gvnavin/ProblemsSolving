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
#include <string>
#include <cctype>
#include <queue>
#include <climits>

#define dbg(x) cout<< #x <<" --> " << x << endl ;
#define PB push_back
#define MP make_pair
#define FF first
#define SS second

using namespace std;

int longest_chain(vector < string > a);



int main() {
        vector<string> v;
        v.PB("a");
        v.PB("b");
        v.PB("ba");
        v.PB("bca");
        v.PB("bda");
        v.PB("bdca");
        cout << longest_chain(v);            
        return 0;
}

typedef struct nnode
{
        int ind;
	string str;
	vector<int> adj;
	nnode() {
	}
	nnode(int ind1, string str1)
	{       
        	ind = ind1;
		str = str1;
	}
} node;

int longest_chain(vector < string > w) {
        int sz = w.size();
        map<string, int> ss;  
        node gr[sz];
        for(int i = 0; i < sz; i++) {
               ss[w[i]] = i;        
               gr[i] = node(i, w[i]);
        }

        for(int i = 0; i < sz; i++) {
            int l = w[i].length();
            if (l == 1) {
                continue;
            }
            for(int j = 0; j < l; j++) {
                string d = w[i];
                d.erase(d.begin()+j);
                
                if (ss.count(d) > 0) {
                    int adjind = ss[d];
                    gr[i].adj.PB(adjind);
                }
            }
        }
        
        for(int i = 0; i < sz; i++) {
                cout <<" i "<< i << endl;
                cout <<"g str "<< gr[i].str << endl;
                cout <<"g adj size "<< gr[i].adj.size() << endl;
                for(int j = 0; j < gr[i].adj.size(); j++) {
                        cout <<"g adjs "<< gr[i].adj[j] << " " << gr[ gr[i].adj[j] ].str << endl;
                }
        }
        
        int mx = 0;  
        int visited[50010] = {0};
        
        cout <<" -------- " << endl;
        
        
        
       for(int i = 0 ; i < sz; i ++) { 
               queue< pair< node, int> > q;
               q.push(make_pair(gr[i] , 1 ));
               int lcnt = 0;
               
               int vis[50010] = {0};
               
               if (visited[i] == 1 ) {
                        continue;
               }
               
               visited[i] = 1;
               
               while(!q.empty()) {
                   
                   node d = q.front().first;
                   int cnt = q.front().second;
                   q.pop();
                   
                   
                   
                   if ( vis[d.ind] == 1 ) {
                        continue;
                   }
                   
                   cout <<" d.str " << d.str << endl;
                   
                   visited[d.ind] = 1;
                   
                   vis[d.ind] = 1;
                   lcnt = max(lcnt, cnt);
                   
                   for(int j = 0; j < d.adj.size(); j++) {
                        q.push( make_pair( gr[ d.adj[j] ] , cnt+1 ) );
                   }
                        
               }
               mx = max(mx, lcnt);
               cout <<" str " << gr[i].str << endl;
               cout <<" lcnt "<< lcnt << endl;
               cout <<" mx "<< mx << endl;
       }
       
       cout << mx << endl;
       return mx;

}





















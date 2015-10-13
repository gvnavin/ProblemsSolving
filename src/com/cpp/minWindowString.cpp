#include <iostream>
#include <string>
#include <vector>
using namespace std;

string minWindow(string S, string T); 

int main() {
    cout << minWindow("bdab", "ab") << endl;    
    return 0;
}

string minWindow(string S, string T) {
       vector<int> m(260, 0);
        
        int tl = T.length();
        for(int i = 0 ; i < tl ; i++) {
            m[T[i]]++;
        }
        
        int left = 0;
        int right = 0;
        int min_left = 0;
        int l = INT_MAX;
        vector<int> m_c(260, 0);
        bool found = false;
        int cnt = 0;
        for(int i = 0 ; i < S.length(); i++) {
             if (m[S[i]] > 0) {
                 m_c[S[i]]++;
                 cout << i << " " << S[i] <<" " << m_c[S[i]] << endl;
                 if(m_c[S[i]] <= m[S[i]])
                    cnt ++;
                 cout << "cnt : " << cnt << " "  <<endl;
                 right = i;
                 if (cnt == tl) {
                    cout << "cnt == tl " << endl;
                    int ol = left;
                     while(m[ S[left] ] == 0 || m_c[ S[left] ] > m[ S[left] ] ) {
                         if(m_c[ S[left] ] > m[ S[left] ]) {
                            m_c[ S[left] ]--;
                         }
                         left++;
                     }
                    found = true;
                    if(right-left+1 < l ) {
                        l = right-left+1;
                        min_left = left;
                    }
                    /*
                    cnt = 0;
                    for(int j = ol; j <= right; j++) {
                        if(m_c[ S[left] ] > 0 ) {
                            cnt += m_c[ S[left] ];
                        }
                    }*/
                 }
                 
             }
        }
        if(found)
            return S.substr(min_left, l);
            
        return "";
 
    }
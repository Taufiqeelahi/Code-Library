#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 + 9 ;
vector<int>g[N] ;
int indeg[N]  ;
bool vis[N] ;
int main() { 
    int n , m ; cin >> n >> m ; 
    while(m--) {
        int u , v ; cin >> u >> v ;
        g[u].push_back(v) ;
        indeg[v]++ ;
    }
    vector<int> z;
    for (int i = 1; i <= n; i++) {
      if (indeg[i] == 0) {
        z.push_back(i);
        vis[i] = true;
      }
    } 
    vector<int> ans ;
    while(ans.size() < n) {

        if (z.empty()) {
            cout << "IMPOSSIBLE\n";
            return 0;
          }
        int cur = z.back();
        z.pop_back();
        ans.push_back(cur);


        /* 

        // Brute force way
        
        int cur = 0 ;
        for(int i = 1 ; i <= n ; i++) {
            if((!vis[i]) && (indeg[i] == 0)) {
                cur = i ;
                vis[i] = true ;
                break ;
            }
        }

        // If cycle exists then impossible
        if(cur == 0) {
            cout << "IMPOSSIBLE"<<'\n' ;
            break;
        }
        ans.push_back(cur) ;

        */

        for(auto v:g[cur]) {
            indeg[v]-- ; 
            if (!vis[v] and indeg[v] == 0) {
                z.push_back(v);
                vis[v] = true;
              }
        }
    }

    for(auto u:ans ) cout << u <<' ';
}

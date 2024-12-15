#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ; 
vector<int>g[N] ; 
bool vis[N] ; 
bool ok ;
int col[N] ;

void dfs(int u ) {
    vis[u] = true ;
    for(auto v:g[u]) {
        if(!vis[v]) {
            col[v] = col[u] ^ 1 ;
            dfs(v) ;
        }
        else {
            if(col[u] == col[v]) {
                ok = false ;
            }
        }
    }
}
int32_t main() {
    int n , m ; cin >> n >> m ;
    for(int i = 0 ; i< m ; i++) {
        int v1 , v2 ; cin >> v1 >> v2 ;
        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }
    col[1] = 0 ;
    ok = true ;
    // dfs(1) ;
    /* Here if the graph is disconnected 
       Then there will be problem so 
       We have to dfs all  */

    for(int i = 1 ; i <= n ; i++) {
        if(!vis[i]) dfs(i) ;
    }
    if(ok) cout <<"YES"<<'\n' ;
    else cout <<"NO"<<'\n' ;

}
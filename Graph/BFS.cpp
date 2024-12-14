#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ; // Maximum size in graph is 1e5
vector<int>g[N] ; // Adjacency list 
bool vis[N] ; // Visited array


int32_t main() {
    int n , m ; cin >> n >> m ;
    for(int i = 0 ; i< m ; i++) {
        int v1 , v2 ; cin >> v1 >> v2 ;
        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }
    queue<int> q ;
    q.push(1) ;
    vis[1] = true ;
    while(!q.empty()) {
        int u = q.front() ;
        q.pop() ;
        cout << u <<" ";
        for(auto v:g[u]) {
            if(!vis[v]) {
                q.push(v) ;
                vis[v] = true ;
            }
        }
    }
}
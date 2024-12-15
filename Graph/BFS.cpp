#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ; // Maximum size in graph is 1e5
vector<int>g[N] ; // Adjacency list 
bool vis[N] ; // Visited array
int dis[N] ;

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

    // For distance from source
    dis[1] = 0 ;
    while(!q.empty()) {
        int u = q.front() ;
        q.pop() ;
        // cout << u <<" ";
        for(auto v:g[u]) {
            if(!vis[v]) {
                q.push(v) ;
                dis[v] = dis[u] + 1 ; // V is adjacent to the node u 
                                     // so if u is at ith level then 
                                     // v must be in the i + 1 th level
                vis[v] = true ;
            }
        }
    }
    for(int i = 1 ; i <= n ; i++) {
        cout << dis[i] <<' ';
    }
}
#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ; // Maximum size in graph is 1e5
vector<int>g[N] ; // Adjacency list 
bool vis[N] ; // Visited array

void dfs(int vertex) { // vertex = starting vertex
     /* Take action on vertex after entering the vertex*/
     vis[vertex] = true ;
     for(int child:g[vertex]) {
        /* Take action on child before entering the child node */
        if(!vis[child] ) dfs(child) ;
        /* Take action on child after exiting child node*/
     }
     /* Take action on vertex before exiting the vertex*/
}


int32_t main() {
    int n , m ; cin >> n >> m ;
    for(int i = 0 ; i< m ; i++) {
        int v1 , v2 ; cin >> v1 >> v2 ;
        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }
}
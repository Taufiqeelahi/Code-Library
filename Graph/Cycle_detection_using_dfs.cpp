#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ; // Maximum size in graph is 1e5
vector<int>g[N] ; // Adjacency list 
bool vis[N] ; // Visited array


/* For detection of cycle we store the parent .
 Cycle detection means -> in my dfs if i find any child where i visited before then there exists a cycle .
 But there is a problem when i visit all the child of  a vertex then i visit the parent (where we came from  ) also .
 So we keep track of parent  */
bool dfs(int vertex , int parent) { 
     vis[vertex] = true ;
     bool isLoopExist = false ;
     for(int child:g[vertex]) {
        if(vis[child] && child == parent) continue ;
        if(vis[child]) return true ; // cycle found
        isLoopExist |= dfs(child , vertex) ; // Here vertex is the parent of child
        
     }
     return isLoopExist ;
     
}


int32_t main() {
    int n , m ; cin >> n >> m ;
    for(int i = 0 ; i< m ; i++) {
        int v1 , v2 ; cin >> v1 >> v2 ;
        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }
    bool isLoopExists  = false ;
    for(int i = 1 ; i <= n ; i++) {
        if(vis[i]) continue;
        if(dfs(i , 0)) {
            isLoopExists = true ; 
            break ;
        }
    }
    cout<<isLoopExists<<'\n';
}
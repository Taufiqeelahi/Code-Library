#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ;
vector<int>g[N] ;
bool vis[N] ;

vector<vector<int>>connected_component ;
vector<int>current_connected_component ;
void dfs(int root) {
  vis[root] = true ;
  current_connected_component.push_back(root) ;
  for(int children:g[root]) {
    if(!vis[children]) dfs(children) ;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0) ;
  cin.tie(0) ;

  int n , m ; cin >> n >> m ; 
  for(int i = 0 ; i < m ; i++) {
    int a , b ; cin >> a >> b ;
    g[a].push_back(b) ;
    g[b].push_back(a) ;
  }

  // Connected Coponents

  int cnt = 0 ;

  for(int i = 1 ;  i <= n ; i++) {
    if(vis[i]) continue ;
    current_connected_component.clear() ;
    dfs(i) ;
    connected_component.push_back(current_connected_component) ;
    cnt++ ;
  }
  
  
  // Printing connected component
  cout<<connected_component.size()<<"\n" ;

  for(auto u:connected_component) {
    for(auto vertex:u) {
      cout<<vertex<<' ';
    }
    cout<<"\n";
  }

}
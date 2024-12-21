// For directed graph and also works for undirected graph
#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ;
vector<int>g[N] ;
bool vis[N] ;
int col[N] ; // At first all color is 0
bool cycle ; 
int par[N] ;


void dfs(int u) {
	col[u] = 1 ; // color 1 means active node
	for(auto v:g[u]) {
		if(col[v] == 0 ){
			par[v] = u ;
			dfs(v) ;
		} 
		else if(col[v] == 1) {
			cycle = true ;
		}
	} 
	col[u] = 2 ; // color 2 means inactive node
}
int main() {

	int n , m; cin >> n >> m;
	while(m--) {
		int x , y ; cin >> x >> y ;
		g[x].push_back(y);
	}
	cycle = false ;
	for(int i = 1 ; i <= n ; i ++) {
		if(col[i] == 0) dfs(i) ;
	}
	cout << ( cycle ? "YES" :"NO") <<'\n';
}
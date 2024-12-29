// For directed graph and also works for undirected graph
// For undirected graph : https://cp-algorithms.com/graph/finding-cycle.html
#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ;
vector<int>g[N] ;
bool vis[N] ;
int col[N] ; // At first all color is 0
bool cycle ; 
int par[N] ;
int cycle_start , cycle_end ;

void dfs(int u) {
	col[u] = 1 ; // color 1 means active node
	for(auto v:g[u]) {
		if(col[v] == 0 ){
			par[v] = u ;
			dfs(v) ;
		} 
		else if(col[v] == 1) {

			// Here cycle start is where cycle start
			// means the node which visited twice
			cycle_start = v ;
			// Cycle end is just before visiting a already visited node 
			/*
			   4 4
			   1 2
			   2 3
			   2 4
			   4 1

			   In this graph there is a cycle 1 - 2 - 4 - 1
			   so we store cycle start = 1 and cycle end = 4
			*/
			cycle_end = u ;
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
	//cout << cycle_start<<' '<<cycle_end<<'\n';
	// Cycle Printing
	if(cycle) {
		vector<int>cycle_path ;

		cycle_path.push_back(cycle_start) ;
		int tmp = cycle_end ;
		cycle_path.push_back(tmp) ;
		while(tmp != cycle_start) {
			tmp = par[tmp] ;
			cycle_path.push_back(tmp) ;
		}
		reverse(cycle_path.begin(),cycle_path.end()) ;
		for(auto u:cycle_path) cout << u <<' ';
		cout <<'\n';
	}
}
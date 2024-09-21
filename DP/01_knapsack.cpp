#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 105 ;
int n , W , w[N] , v[N] , dp[N][100005] ;
int rec(int i , int weight) {

    if( i == n + 1 ) return 0 ;
    // i = current position  and weight = total weight
    // If we dont take the current element then only position will change

    if(dp[i][weight] != -1 ) return dp[i][weight] ;
    int ans = rec(i+1 , weight ) ;
    if(weight + w[i] <= W ) ans = max(ans , rec(i+1 , weight + w[i] ) + v[i] ) ;
    // Here we go the next position with taking the current position value 
    // So weight increased by w[i] and value increased by v[i] (current position value )
    // And we take the max of this 2 decision value 

    return dp[i][weight] = ans  ;
}
int32_t main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> W ;
    for(int i = 1 ;  i <= n ; i++) {
        cin >>w[i] >> v[i] ;
    }
    memset(dp , -1 , sizeof dp) ;
    cout<<rec(1,0) ;
}
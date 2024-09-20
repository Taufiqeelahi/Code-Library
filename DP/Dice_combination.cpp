#include<bits/stdc++.h>
using namespace std;

int count(int n) {
    if(n < 0) return 0 ;
    if(n == 0) return 1 ;
    int ans = 0 ;
    for(int i  = 1 ; i <= 6 ; i++) {
        ans += count(n-i) ;
    }
    return ans ;
}
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ; cin >> n ;
    cout<<count(n)<<'\n';
}
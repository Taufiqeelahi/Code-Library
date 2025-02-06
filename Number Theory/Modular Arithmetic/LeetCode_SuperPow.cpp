#include<bits/stdc++.h>
using namespace std ;
const int MOD = 1337 ; // ETF(1337) = 1337 * (1 - 1/7)*(1-1/191) ) = 1140 ( 1337 is not a prime number so , we can't write MOD - 1)   

long long bin_expo(long long base , long long power) {
    long long res = 1 ;
    while(power > 0) {
        if(power & 1 ) {
            res = (res * base) % MOD ;
        }
        base = (base * base ) % MOD ;
        power /= 2 ;
    }
    return res ;
}
int main() { 
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ;
    long long a ; cin >> a ;
    int n ; cin >> n ;  
    vector<int>b(n) ;
    for(int &x:b) cin >> x ;

    long long res = 0 ;
    for(int i = 0 ; i < n ; i++) {
        res = ( (res * 10) + b[i] ) % 1140 ;
    } 
    if(res == 0) res = 1140 ; // Corner case 
    
    cout << bin_expo(a,res)<<'\n' ;

}
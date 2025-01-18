#include<bits/stdc++.h>
using namespace std ;

const long long mod = 1e18 ;
long long bin_multiply(long long a , long long b) {
    long long ans = 0 ;

    while(b > 0) {
        if(b&1) {
            ans = (ans + a) % mod ;
        }
        a = ( a + a ) % mod ;
        b >>= 1 ;
    }
    return ans ;
}
int main() { 
    long long a , b ; cin >> a >> b ;
    cout << bin_multiply(a , b ) << '\n' ;
}
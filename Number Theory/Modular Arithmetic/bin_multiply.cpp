#include<bits/stdc++.h>
using namespace std ;


/*
Basic idea is instead of doing a * b 
we do -> (a + a + a ....... ) b times and to avoid overflow ( if mod is 1e18 ) then -> 
( a % mod + a % m ......) % mod

here , long long is < 2e18 
so , (a + a ) < 2e18 
(a + a) % mod < 1e18 ( mod is 1e18 )


Example :
3 * 13 ( a * b)

13 in binary = 1101 => 2^3 + 2 ^ 2 + 2^0 

3 * 13 = 3 * (2^3 + 2 ^ 2 + 2^0 )
so , when b is set (means 1 ) then we add a to answer 
and everytime a + a and b /= 2 
*/
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
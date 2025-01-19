#include<bits/stdc++.h>
using namespace std ;
const int mod = 1e9 + 7 ;          
int main() { 
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ;  
    
    int base , pow ; cin >> base >> pow ;

    // 2^7 
    //  base = 2 ans = 1 * 2 = 2 , 2 ^ 6
    // base = 2 * 2 = 4   2 ^ 3
    // base = 4 ,  ans =2 * 4  = 8 , 2^2 
    // base = 4 * 4 = 16 , 2^1 
    // base = 16 , ans = 8 * 16 , 2 ^ 0

    long long ans = 1 ;
    while( pow > 0) {

        // Case 1 : a == 1e18 

        // base %= mod  If a == 1e18 
        /*

        // Case 2 : mod == 1e18 
        If mod == 1e18 then -> 
        let's say a = 1e9 and mod = 1e18 

        then ( a * a ) % mod = ( 1e9 * 1e9 ) % 1e18  = 1e18 
        then -> (a * a) = ( 1e18 * 1e9) = overflow
        in this case we need to avoid ( a * a ) -> big number multiplication so we use binary multiplication
        */


        // Case 3 : power is 1e18 
        /*

        */
        if(pow % 2 == 0) {
            base = (base * base) % mod ; // For case 2 : base = bin_multiply( base , base) ; 
            pow /= 2 ;
        }
        else {
            ans = (ans * base ) % mod  ; // For case 2 : base = bin_multiply( ans , base) ; 
            pow-- ;
        }

        /* 
        ----- Same as the above code ----- 
        if(pow & 1) {
            ans = ( ans * base ) % mod ;
        }
        base = (base * base ) % mod ;
        b >>= 1
        */ 
    }
    cout<< ans << '\n' ;
}

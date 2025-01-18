#include<bits/stdc++.h>
using namespace std ;
                     
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
        if(pow % 2 == 0) {
            base = base * base ;
            pow /= 2 ;
        }
        else {
            ans = ans * base ;
            pow-- ;
        }
    }
    cout<< ans << '\n' ;
}
/*
long long binpow(long long a, long long b) {
    if(b == 0) return 1; // Any number to the power of 0 is 1
    a %= mod;            // Apply mod to base early to prevent overflow
    
    if(a == 0) return 0; // If base is 0, result is 0 for any non-zero power
    
    long long res = 1;   // This will store the result
    
    while (b > 0) {
        if (b & 1)        // If b is odd (checking the least significant bit)
            res = res * a % mod; // Multiply the result by a (mod mod)
        a = a * a % mod;  // Square a (mod mod) to account for powers of 2
        b >>= 1;          // Right shift b (equivalent to dividing by 2)
    }
    
    return res;
}

*/

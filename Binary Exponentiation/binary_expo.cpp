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
long long bin_expo (long long x ,long long pow) {
    x = x % mod ;
    if(pow == 0) return 1 ;
    else if(pow == 1) return x ;

    long long p = bin_expo(x*x , pow / 2) ;
    if(pow % 2) {
        return p * x % mod ;
    }
    else return p ;
} 
*/
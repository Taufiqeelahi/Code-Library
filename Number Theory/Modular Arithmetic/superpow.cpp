#include<bits/stdc++.h>
using namespace std ;

const int M = 1e9 + 7 ;

/*
 50^64^32 = ? 

 ETF(Euler totient function ) : N -> Count k such 1 <= k <= N ans k and n are co prime

 ETF(N) -> all numbers less than equal to N such that they are coprime to N 

 Mathmatical Formula : 

 ETF(N) = n * ∏(Multiplication) ( 1 - (1 / p )) 
 Here , 
 P = distinct prime factor of N

 ETF (5) = 5 * ( 1 - (1/5)) = > 4

 ETF(6) = 6 * (1 - (1/3)) * (1 - (1/2)) => 2 
 Prime factor of 6 is : 3 , 2

 ETF (6) is Phi ( 6) 


 Euler Theorem :
 a^b = a^b mod ETF(m) mod m 
 => (a^b % m ) = (a^(b % ETF(m))) % m 

 if m is prime then ETF(M) = M - 1  
*/

int super_pow(int a, long long b, int m) {
    int ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = (1LL * ans * a) % m; // Ensure multiplication stays within bounds
        }
        a = (1LL * a * a) % m;
        b >>= 1;
    }
    return ans;
}
int main() { 

    // 50 ^ 64 ^ 32 % M
    /*
       50 ^ ( 64 ^ 32 % M-1)

       exp = > ( 64 ^ 32 % M-1)
       result = ( 50 ^ exp )  % M 
    */
    // cout << super_pow(50 , super_pow(64,32,M-1) , M) ;
    long long exp = super_pow(64, 32, M - 1);
    int result = super_pow(50, exp, M);
    cout << result <<'\n' ;
}
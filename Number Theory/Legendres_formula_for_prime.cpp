//Legendre’s formula (Given p and n, find the largest x such that p^x divides n!)
#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    ll n,p ; cin>>n>>p ;
    int ans = 0 ;
    while(n)
    {
        ans += (n/p) ;
        n/= p ;
    }
    cout<<ans<<endl;
}

// Here we know that n! = 1 * 2 * 3 *...*n
// We want to know the large power of p which is divided by n! 
// First we know that for p there is  (n/p) ta number ase  suppose p = 2 , n = 12 so in 12 there are  12/2 = 6
// But when 4 there is 2^2 so 2 twos so we need to check (n/P^2) also..
// so the formula is for p
// summation of (n/p^i) ; where i>=1

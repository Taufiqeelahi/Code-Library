#include<bits/stdc++.h>
using namespace std ;

const int N = 55 ;
int f[N] ;
bool is_computed[N] ;
int fibo(int n) {
    if(n == 0) return 0 ;
    if(n == 1) return 1 ;
    if(is_computed[n]) return f[n] ;
    f[n] = fibo(n-1) + fibo(n-2) ;
    is_computed[n] = true ;
    return f[n] ;
}
int main() {
    cout<<fibo(5)<<'\n' ;
}
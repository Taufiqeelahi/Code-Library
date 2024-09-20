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

/* ITERATIVE CODE 

f[0] = 0 ;
f[1] = 1 ;
for(int i = 2 ; i <= n ; i++) {
    f[i] = f[i-1] + f[i-2] ;
}
cout<<f[i]<<'\n' ;
*/
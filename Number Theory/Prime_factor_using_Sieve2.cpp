#include<bits/stdc++.h>
using namespace std ;

const int N = 1e8 + 9 ;
bitset<N>f ;
vector<int>primes ;
void sieve() {
    f[1] = true ;

    for(int i = 2 ; i * i <= N - 9 ; i++) {
        if(!f[i]) {
            for(int j = i * i ; j <= N - 9 ; j += i) {
                f[j] = true ;
            }
        }
    }

    for(int i = 2 ; i <= N - 9 ; i++) {
        if(!f[i]) {
            primes.push_back(i) ;
        }
    }
}
int main() { 
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ;  

    sieve() ;
    int n ; cin >> n ;
    vector<int>factors ;

    for(int i = 0 ; i < primes.size() && (primes[i]*primes[i]) <= n ; i++) {
        if(n % primes[i] == 0) {
            while(n % primes[i] == 0 ) {
                n /= primes[i] ;
                factors.push_back(primes[i]);
            }
        }
    }
    if(n > 1) factors.push_back(n) ;

    for(auto u:factors) cout << u <<' ';
    cout <<'\n';
}
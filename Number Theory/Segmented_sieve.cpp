#include<bits/stdc++.h>
using namespace std ;
const int N = 1e6 ;
bool sieve[N + 1] ;

void createsieve() {
    fill(sieve, sieve + N + 1, true);
    sieve[0] = sieve[1] = false;
    for(int i = 2 ; i * i <= N ; i++) {
        if(sieve[i] == true) {
            for(int  j = i * i ; j <= N ; j += i) {
                sieve[j] = false ;
            }
        }
    }
}

vector<int>generateprimes(int N) {
    vector<int>primes ;
    for(int i = 2 ; i <= N ; i++) {
        if(sieve[i] == true ) {
            primes.push_back(i) ;
        }
    }
    return primes ;
}
int main() { 
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ; 
    createsieve(); 
    int l , r ; cin >> l >> r ;
    // Step 1 : Generates all primes upto sqrt(r)
    vector<int> primes = generateprimes(sqrt(r)) ;

    // Step 2 : create a dummy array of size R - L + 1 and make everyone as 1

    vector<bool>dummy(r-l+1 , true)  ;

    // step 3 : marks all multiple as false 

    for(auto pr:primes) {

        // First multiple of the prime number in range l to r 
        int firstmultiple = (l/pr) * pr ;
        if(firstmultiple < l) firstmultiple += pr ;


        for(int j = max(firstmultiple , pr * pr) ; j <= r  ; j += pr) {
            // Dummy index = (j - l) ;
            dummy[j-l] = false ;
        }
    }

    // Step 4 : Get all the primes

    for(int i = l ; i <= r ; i++) {
        if(dummy[i-l] == true) {
            cout<<i<<' ' ; 
        }
    }

}
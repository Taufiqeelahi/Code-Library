// Given an array of integer numbers, we need to find maximum size of a subset such that sum of each pair of this subset is not divisible by K. 
#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    int n ; cin>>n ;
    int k ; cin>> k ;
    vector<ll>v(n);
    for(int i = 0 ; i<n ; i++) cin>>v[i] ;
    
    vector<int>f(k,0) ; // frequency array
    
    // Here we are storing the frequency of the number by taking modulo of k 
    // By doing this we fix the number by 0 to k
    for(int i = 0 ; i<n ; i++){
    	f[v[i]%k]++ ;
    }

    // If k/2 then we only take 1 k/2 because if we take 2 then its divisible by k
    if(k%2 == 0){
    	f[k/2] = min(f[k/2],1) ;
    }

    // If there are more than 1 zero then we take only one . Because if we take more then it may be pair with some and divisible by k
    int zero = min(f[0],1) ;

    int res = zero ; // Initializing res 

    for(int i = 1 ; i<=k/2 ; i++){
    	res += max(f[i],f[k-i]) ; // Here we take the maximum of i and k-i ; 
    	                          // because i + (k-i) = k so we need to take either all i or all k-i .
    	                          // Here we want to maximize so we take maximum of them
    }

    cout<<res<<endl ;


    
}

// Input :
// 5 3
// 3 7 2 9 1
// output : 3
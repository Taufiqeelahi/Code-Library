// Largest power of k in n! (factorial) where k may not be prime
#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    ll n,x ; cin>>n>>x ;
    set<int>prime_factor ;
    ll tmp  = x ;
    for(int i = 2 ; i*i<=n ; i++){
    	if(tmp%i ==0){
    		while(tmp%i ==0){
                prime_factor.insert(i);
                tmp /= i ; 
    		}
    	}
    }
    if(tmp>1) prime_factor.insert(tmp);
    int res = INT_MAX ;

    for(auto u:prime_factor) {
    	ll number = n ;
    	int p = u ;
    	int  ans = 0 ;
    	while(number){
    		ans += (number/p);
    		number /=p ;
    	}
    	res = min(res,ans);
    }
    cout<<res<<endl;
}
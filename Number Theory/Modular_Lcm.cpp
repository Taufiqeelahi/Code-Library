#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    ll n ; cin>>n ;
    vector<ll>v(n);
    for(ll &x:v) cin>>x ;

    map<ll,int>mp ;

    for(int i = 0 ; i<n ; i++){
        ll n = v[i];
        ll tmp = n ;
        for(int j = 2 ; j*j<=n ; j++){
            if(n%j ==0){
                int count = 0 ;
                while(tmp%j ==0){
                     count++; 
                     tmp /= j ;
                }

                mp[j] = max(mp[j],count) ;
            }
        }
    }

    for(auto u:mp){
    	if(u.second !=0)
        cout<<u.first<<" "<<u.second<<endl;
    }
}

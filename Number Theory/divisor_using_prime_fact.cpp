#include<bits/stdc++.h>
using namespace std ;

const int N = 1e6 + 7;
int spf[N];
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    for(int i = 2 ; i < N  ; i++) spf[i] = i ;
    for(int i = 2 ; i  < N ; i++) {
        for(int j = i ; j < N ; j += i) {
            spf[j] = min(spf[j] , i) ;
            }
    }

        long long n ; cin >> n ;
        vector<int>prime_fact ;
        while(n > 1) {
            prime_fact.push_back(spf[n]) ;
            n /= spf[n] ;
        }
        vector<pair<int,int>>power ;
        sort(prime_fact.begin(),prime_fact.end());
        long long  tmp = -1 ;
        int cnt = 0 ;
        // cout << prime_fact.size()<<'\n' ;
        for (int i = 0; i < prime_fact.size(); i++) {
            if(tmp == -1) {
                tmp = prime_fact[i] ;
                cnt = 0 ;
            }
            if (prime_fact[i] == tmp) {
                cnt++;
            }
            else {
                if (tmp != -1) {
                    power.push_back({tmp, cnt});
                    tmp  = prime_fact[i];
                    cnt = 1 ;
                }
            }
        }
        if(tmp != -1) power.push_back({tmp, cnt}); 
        //for(auto u:power) cout << u.first<<' '<<u.second<<'\n';
        //cout<<'\n' ;
        vector<int>div ;
        div.push_back(1) ;
        
        for(int i = 0 ; i < power.size() ; i++) {
            int sz = div.size() ;
            long long val = power[i].first ;
            long long powerr = power[i].second ;
            for(int p = 0 ; p < powerr ; p++) {
                for(int j = 0 ; j < sz ; j++) {
                    div.push_back(div[j]*val) ;
                }
            val *= (power[i].first) ;
            }
        }
        sort(div.begin(),div.end()) ;
        for(auto u:div) cout << u <<' ';
    
}
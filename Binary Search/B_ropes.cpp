#include<bits/stdc++.h>
using namespace std ;

bool check(double mid , vector<int> &v , int k) {
    int cnt = 0 ;
    for(int i = 0 ; i < v.size() ; i++) {
        cnt += floor(v[i]/mid) ;
    }
    return cnt >= k ;
}
int main() {
    int n , k ; cin >> n >> k ;
    vector<int>v(n) ;
    for(int &x:v) cin >> x ;
    double l = 0 ;
    double r = 1e8 ;
    double mid ;
    double ans = 0 ;
    for(int i = 0 ; i < 100 ; i++) {
        mid = l + ((r-l)/2) ;
        if(check(mid,v,k)) {
            ans = mid ;
            l = mid ;
        }
        else r = mid   ;
    }
    cout<<setprecision(10)<<ans<<'\n' ;
}
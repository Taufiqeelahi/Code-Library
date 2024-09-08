// Find first value >= x 
#include<bits/stdc++.h>
using namespace std ;

int  main() {
    int n ; cin >> n ;
    vector<int>v(n) ;
    for(int &x:v) cin >> x ;
    int x ; cin >> x ;
    int l = 0 , r = n - 1 ;
    int ans = -1 ;
    while(l <= r) {
        int mid = l + (r-l)/2 ; 
        if(v[mid] >= x) {
            ans = mid ;
            r = mid - 1 ;
        }
        else l = mid + 1 ;
    }
    cout<<v[ans]<<'\n' ;
}
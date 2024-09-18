#include<bits/stdc++.h>
using namespace std ;

long long  w  , h  , n  ;
bool check (long long  mid ) {
    return ((mid/w) * (mid / h)) >= n ;
}
int  main() {
   cin >> w >> h >> n  ;
   long long  l = 0 ;
   long long  r = 1 ;
   while(!check(r))  r  *= 2 ;

   long long  ans = 0 ;
   long long mid ;
   while(l <= r) {
    mid = (l + r) / 2 ; 
    if(check(mid)) {
        ans = mid ;
        r = mid - 1  ;
    }
    else l = mid + 1 ;
   }
   cout<<ans<<'\n' ;
}
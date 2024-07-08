#include<bits/stdc++.h>
using namespace std ;

int main() {
    int n ; cin >> n ;
    int l = 1 ;
    int m = n ;
    bool flag = false ;
    while(l <= m) {
        int mid  = l + (m-l)/2 ;
        if(mid*mid ==  n ) {
            cout<<"YES"<<'\n' ;
            flag = true ;
            break ;
        }
        if(mid * mid > n) {
            m = mid - 1 ;
        }
        if(mid*mid < n ) {
            l = mid + 1 ;
        }
    }
    if(!flag) cout<<"NO" <<'\n' ;
}
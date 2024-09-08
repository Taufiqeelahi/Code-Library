/*
  Rotated Array : Somebody rotated (shifted ) a sorted array .
  Find the smallest element .
  Ex :
  Initial array : 2 3 6 7 9 15 19
  After rotated : 6 7 9 15 19 2 3


  Solution Hint : We need to find two part which is sorted (boundary between two sorted parts) 
  Key point : We can not be sure about eliminating a half beacuse it's partially sorted .
  
  So , Identify the sorted half .
  To identify we compare the low value with mid ( first value )

  6 7 9 15 19 2 3
  T T T  T  T F F
*/
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
        if(v[mid] == x) {
            ans = mid ;
            break ;
        }
        // Left sorted ? 
        // It is gurannted in rotated sorted array that if 1 half is not sorted then the other is sorted .
        if((v[l] <= v[mid])) {
            // Check if my target is in the left or not .
            if((v[l] <= x)  && ( x <= v[mid])) {
                r = mid - 1 ;
            }
            else l = mid + 1 ;
        }
        else {
            // Right sorted ?
            if( (v[mid] <= x) && (x <= v[r]) ) {
                l = mid + 1 ;
            }
            else r = mid - 1 ;
        }
    }
}
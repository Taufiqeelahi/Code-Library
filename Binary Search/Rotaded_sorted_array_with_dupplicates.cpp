/*
  Rotated Array : Somebody rotated (shifted ) a sorted array .
  Find the smallest element .
  Ex :
  rotated array  : 3 1 2 3 3 3 3

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
        // For duplicates rotated array 
        // If v[l] == v[mid] == v[r] 
        // then we should shrink our search space 

        if(v[l] == v[mid] && v[mid] == v[r]) {
            l++ ;
            r-- ;
            continue; // Continue because we just shrink our search space so no need to do the below step
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
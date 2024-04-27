#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; cin>>n ;
    vector<int>v(n+2,0) ; // n+2 because because we take 1 base indexing and a extra index at last 
    int q ; cin>>q ;
    while(q--)
    {
    	int l,r,k ; cin>>l>>r>>k ;
    	v[l] += k ;  // Add k in l 
    	v[r+1] -= k ; // Remove k from R+1
    }  

    // Prefix sum
    for(int i =  1; i<=n ;i++)
    {
    	v[i] += v[i-1] ;
    } 
    
    // This is the final array of n size 
    
    for(int i = 1 ; i<=n ;i++)
    {
    	cout<<v[i]<<' ';
    }
}
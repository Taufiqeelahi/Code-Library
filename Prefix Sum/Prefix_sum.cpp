#include<bits/stdc++.h>

using namespace std ;

int main()
{
    // Prefix sum is  a precalculation technique
    int n ; cin>>n ; // Array size
    vector<int>v(n+1);

    for(int i = 1 ;i<=n ;i++)
    {
    	cin>>v[i] ;
    } 

    // n = 6
    // V = 1 2 3 4 5 6 
    // Prefix Sum array
    // Size is n+1 because we want to input pre_sum[0] = 0 ;
    vector<int>pre_sum(n+1) ;   

    pre_sum[0] = 0 ;

    for(int i = 1 ; i<=n ;i++)
    {
        pre_sum[i] = pre_sum[i-1] + v[i] ;
    }

    for(auto u:pre_sum) cout<<u<<' '; // Pre_sum = 0 1 3 6 10 15 21
    cout<<endl; 
}
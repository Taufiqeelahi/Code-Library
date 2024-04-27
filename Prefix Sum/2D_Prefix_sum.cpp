#include<bits/stdc++.h>

using namespace std ;

int main()
{
     int n,m ; cin>>n>>m ; // Array N*M size
     vector<vector<int>>v(n+1,vector<int>(m+1)) ;

     vector<vector<int>>pre_sum(n+1,vector<int>(m+1));
     
     // N+1 * M+1 size because we want to use 1 base indexing
     // Input and prefix sum array calculation
     // Initialize all prefix_sum = 0 

     for(int i = 1 ; i<=n ;i++)
     {
     	for(int j = 1 ; j<=n ; j++)
     	{
     		pre_sum[i][j] = 0 ;
     	}
     }

     for(int i = 1 ; i<=n ;i++)
     {
     	for(int j = 1 ; j<=n ; j++)
     	{
     		cin>>v[i][j] ;
     		pre_sum[i][j] = v[i][j] + pre_sum[i-1][j] + pre_sum[i][j-1] - pre_sum[i-1][j-1] ;
     	}
     }

     // Query answer part
     int q ; cin>>q ;

     while(q--)
     {
     	int a,b,c,d ; cin>>a>>b>>c>>d ;

     	cout<<pre_sum[c][d] - pre_sum[a-1][d] - pre_sum[b-1][c] + pre_sum[a-1][b-1] <<endl;
     }

}
#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

int d[104] ;
using namespace std ;

int main()
{
    FAST_IO ;
    int n = 100 ;
    for(int i = 1 ; i<=n ; i++)
    {
    	for(int j = i ; j<=n ;j+=i)
    	{
    		d[j]++;
    	}
    }
    for(int i = 1 ; i<=n ;i++)
    {
    	cout<<d[i]<<' ';
    }
    cout<<endl;
    
}
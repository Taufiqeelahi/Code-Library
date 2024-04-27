#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    int n ; cin>>n ;
    int nod = 1 ;
    int tmp = n ;
    for(int i = 2 ; i*i<=tmp;i++)
    {
    	int power = 0 ;
        if(n%i ==0)
        {
        	
        	while(n%i==0)
        	{
        		power++ ;
        		n/=i ;
        	}
        }
        nod *= (power+1) ;
    }
    cout<<nod<<endl;
    
}
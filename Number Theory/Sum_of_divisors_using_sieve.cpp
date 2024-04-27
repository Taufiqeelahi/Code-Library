#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

const int N = 1e6 + 9 ;
vector<int>v(N);
int main()
{
    FAST_IO ;
    for(int i = 1 ; i<N ;i++)
    {
    	for(int j = i ;j<N ;j+= i)
    	{
    		v[j] += i  ;
    	}
    }
    cout<<v[12]<<endl;

    
}
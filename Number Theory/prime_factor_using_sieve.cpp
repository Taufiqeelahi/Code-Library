#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;


const int N = 1e6 + 9 ;
int spf[N] ;
int main()
{
    FAST_IO ;
    for(int i = 2 ; i<N ; i++)
    {
        spf[i] = i ;  
    }

    for(int i = 2 ; i<N ;i++)
    {
        for(int j = i ; j<N ; j += i)
        {
            spf[j] = min(spf[j],spf[i]);
        }
    }

    int q ; cin>>q ;
    while(q--)
    {
        int n ; cin>>n ;
        vector<int>ans ;

        while(n>1)
        {
            ans.push_back(spf[n]);
            n /= spf[n] ;
        }
        for(auto x:ans ) cout<<x<<" ";
        cout<<endl;
    }
}
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; cin>>n ;

    vector<int>v ;

    for(int i = 2 ; i*i<= n ; i++)
    {
        if(n%i ==0)
        {
            //cout<<i<<endl;
            while(n%i ==0)
            {
                v.push_back(i);
                n /= i ;
            }
        }
    }

    if(n>1) v.push_back(n) ;

    for(auto u: v) cout<<u<<' ';
    cout<<endl;
}
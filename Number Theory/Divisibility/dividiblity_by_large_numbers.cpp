#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    string a ; int b ; cin>>a>>b ;
    int ans = 0 ;

    for(int i = 0 ; i<a.size() ;i++)
    {
    	ans = (ans*10 +(a[i]-'0') ) %b ;
    }
    if(ans ==0 )
    {
    	cout<<"divisible"<<endl;
    }
    else cout<<"Not Divisible"<<endl;
    
}
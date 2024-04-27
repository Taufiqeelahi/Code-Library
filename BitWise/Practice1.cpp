#include<bits/stdc++.h>

using namespace std ;

int main()
{
    //check i Number  bit On or Of
    // i = 3
    int x = 11 ;
    if(((x>>3)&1)==1)
    {
        cout<<"ON"<<endl ;
    } 
    else
    {
        cout<<"OF"<<endl ;
    }

    // Number of on bits
    
    cout<<"Number of ON bits :";
    for(int i = 0 ; i<31 ;i++)
    {
        if((x>>i)&1)
        {
            cout<<i<<" " ;
        }
    }
    // Buitlt in POP_count
    cout<<" :Number of ON ->Built in Function "<<__builtin_popcount(x)<<endl ;

    cout<<"Number of OF bits :";
    for(int i = 0 ; i<31 ;i++)
    {
        if(((x>>i)&1)==0)
        {
            cout<<i<<" " ;
        }
    }

    cout<<endl ;

    //Kth bit ON
    //K= 2
    //1111 -> 15
    cout<<"11's 2nd Bit ON "<<((1<<2)|x)<<endl  ;

    //Kth bit OF
    cout<<"11's 3rd bit OF "<<((~(1<<3))&x)<<endl ;
}
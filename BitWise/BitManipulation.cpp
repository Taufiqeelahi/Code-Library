#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int number = 11;
    
    //Left shift <<
    // x<<1=  2*x
    //x<<k = x*2^k
    cout<<(4<<2)<<endl ; ;

    // 2^20 ??
    cout<<(1<<20)<<endl ; ;

    //Right shift >>
    //x>>k = x/(2^k)

    cout<<(4>>2)<<endl ; ; 

    // How to check if a bit is on or off
    // 11 -> 0 0 1 0 1 1 
    //3rd bit is on or off ??
    //11-> 0 0 1 0 1 1
    //we right shift 3 (number>>3)
    // then -> 0 0 0 0 0 1
    // then we check the last digit
    // if it is 1 then on or if it is 0 then off
    

    // How to check last digit ??
    // we AND 1 ..
    // (number>>3) -> 0 0 0 0 0 1
    //              & 0 0 0 0 0 1
    //------------------------------
    //                0 0 0 0 0 1
    // if it is 1 then my 3rd bit is on
    int check = (number>>3)&1 ;
    if(check ==1) cout<<"3rd bit on"<<endl ;

    // LAST BIT CHECK -> number & 1
    // Kth bit check -> (number>>k)&1 


    // How to turn on a bit
    // 11 -> 0 0 0 1 0 1 1
    // we want to on the 4th bit
    // 11 ->0 0 0 1 0 1 1
    //    | 0 0 0 0 1 0 0
    //-------------------------
    //      0 0 0 1 1 1 1



    
    

    
}
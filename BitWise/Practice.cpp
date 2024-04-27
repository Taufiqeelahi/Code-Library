#include<bits/stdc++.h>

using namespace std ;

int main()
{
    //Bitwise AND
    int a = 3 ;
    int b = 4 ;

    cout<<"Bitwise AND of a and b :"<<(a&b)<<endl ;
    cout<<"Bitwise AND of a and 1 :"<<(a&1)<<endl ;
    cout<<"Bitwise AND of a and 0 :"<<(a&0)<<endl ;

    cout<<"Bitwise OR of a and b :"<<(a|b)<<endl ;
    cout<<"Bitwise OR of a and 1 :"<<(a|1)<<endl ;
    cout<<"Bitwise OR of a and 0 :"<<(a|0)<<endl ;

    // Left shift--> x<<k = x*2^k 
    cout<<"Left shift a by 1 :"<<(a<<1)<<endl ;
    cout<<"Left shift a by 2:"<<(a<<2)<<endl ;

    // 2^20= ??
    cout<<"2^20 :"<<(1<<20)<<endl ;
    
    //Right shift
     
    cout<<"Right Shift a by 1 :"<<(a>>2)<<endl ;
    cout<<"Right shift a by 2 :"<<(a>>2)<<endl ;


    // How to check which bit is on or off in a number 
    // 4 -> 0100  we want to check the 3rd bit on / off ??
    // the 3rd bit is 0.
    // We first right shift the number by 3 ..Here we want to check the 3rd bit so, we right shift by 3
    //then my number will be -> 0001
    // Now , we check the last digit .
    

    // Now , how we check the last digit ?? we just AND 1 to the number . if answer is 1 then the last bit is on . if 0 then answer is 0

    cout<<"3rd bit of b is :"<<((b>>3)&1)<<endl ;

    // Last bit check :  x&1
    // Kth bit check : (x>>k)&1 

    // How to turn on / off a bit in a number 
    // 11 -> 00001011
    //if i want to turn on the 2nd bit  bit of  number 
    // the number will be 00001111
    // so we OR this number  00001011 with a number whose 2nd bit is on and the other bit is all 0
    //                     | 00000100
    //---------------------------------------------
    //                       00001111
    // NoW , How we get a number whose 2nd bit is 1 and other bit is 0 ??
    // We just left shift (1<<2) by 3 
    // 1 - >   00000001
    //1<<2 ->  00000100
    
    int number = 11 ;
    cout<<"2nd bit on of 11 : "<<((11)|(1<<2))<< endl ;

    // SO , IF WE WANT TO ON Kth BIT OF A NUMBER WE USE  ((1<<K)|NUMBER) 


    // Now if we want to turn of the 3rd bit of 11 ???
    // 11 -> 00001011
    //3rd bit of ->  00000011
    // Here we AND the number to a number whose 3rd bit is 0 and All other bit is 1 
    //Now , How i get such a number ??
    // we just Left shift 1 by 3 (00001000)
    // And the Not it .~(00001000)
    // 11110111

    cout<<"3rd bit of of 11 : "<<((11)&(~(1<<3)))<<endl ;

    // SO , IF WE WANT TO TURN OF Kth BIT of A NUMBER WE USE ->  (~(1<<k)&NUMBER)


    // IF WE WANT TO FLIP THE BIT WE XOR BY 1 
    // IF WE WANT SAME THEN WE XOR BY 0
}
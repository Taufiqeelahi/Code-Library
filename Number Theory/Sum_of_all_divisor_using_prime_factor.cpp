#include<bits/stdc++.h>

using namespace std ;

int main()
{
    auto st = clock() ;
    //Sum of all divisor

    int n ; cin>>n ;
    // First all prime factor of n the sum of divisor  using 1 + p1^power+....
    // Let n = 12 
    // Prime factor = 2 * 2 * 3 = 2^2 * 3
    // Here we have 6 way means 6 divisor ((2+1) * (1+1))
    // here my options are
    // 1           1 
    // 2           3
    // 2^2

    // Now my divisor sum is  (1*1) + (1*3) + (2*1) + (2*3) +  (2^2 * 1) + (2^2 *3)   == 28
    //  now if we common then  Sum Of divisor = (1+2+2^2) * (1+3) ...... that is a sequence p^0 + p^1 + ...p^n  here n = power , p = prime factor
    // if we multiply all sequence then we get sum of all divisor  
    // Formula   ->  sequence1 sum  * sequence2 sum *.....
    int divisorSum = 1 ;
    for(int i = 2 ; i*i<=n ;i++)
    {
        if(n%i ==0)
        {
            int tempSum = 1 ;
            int p = 1 ;

            // Here we are calculating like .. if i say n = 12 then 12 % 2 == 0
            // while(12 % 2 == 0) then  n = 12 / 2 = 6 ans p = p * 2 = 2 (p == 1 initially ) here p counts how many same prime factor are found
            // tempSum = tempSum + p 
            // Here tempSum is calculating the each part of the sequence and then multiply it to the divisorSum                
            while(n%i ==0)  
            {
                n /= i ;
                p *= i ;
                tempSum +=p ;
            }
            divisorSum *= tempSum ;
        }
    }
    
    // If at last n is not 1 then n is another prime factor so we need to multiply n+1 ( n+1 because prime factor power is 0 . sequence is 1 + prime factor)
    // Suppose at last we have n = 3 that means 3 is a prime factor whose power is 1
    // So we need to multiply  (1+3) to the divisor sum 
    if(n!=1)
    {
        divisorSum *= (n+1) ; // Need to multiply (p^0 + p^1)
    }
    cout<<divisorSum<<endl;
    cerr<<1.0*(clock()-st)/CLOCKS_PER_SEC<<endl;

}
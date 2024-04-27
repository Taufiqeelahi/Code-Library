// Count pairs in array whose sum is divisible by K
#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n ; cin>>n ;
	int k ; cin>> k;
	vector<int>v(n);
	map<int,int>mp ;
	for(int &x:v){
		cin>>x ;
        mp[x%k]++; // Here we are taking the reminder frequency
	}
    
    //for(int i = 0 ; i<k ;i++) cout<<mp[i]<<" ";
    int res = mp[0]/2 ; // Two number with remainder 0 means divisible by k
	for(int i = 1 ; i<=k/2 ; i++){
		res += min(mp[i],mp[k-i]) ; // If a reminder is 1 and k-i = 4-1 = 3 (k=4) 
		                            // so if we take the common of both then we will get the pair 
		                            //which is devisible by k . Here we loop 0 to k/2 because if we don't there will be duplicate .
	}
	cout<<res<<endl;


}
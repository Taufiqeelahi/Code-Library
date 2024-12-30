#include<bits/stdc++.h>
using namespace std ;

const int N = 100 ;
int main() { 
    vector<vector<int>>div(N) ;
    for(int i = 1 ; i < N ; i++ ) {
        for(int j = i ; j < N ; j += i ) {
            div[j].push_back(i) ;
        }
    }

    int n ; cin >> n ;
    for(auto u : div[n]) {
        cout << u << ' ' ;
    }
}
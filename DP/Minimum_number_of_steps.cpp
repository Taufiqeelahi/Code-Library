#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 + 9 ;
int step[N] ;
int min_steps( int i ) { 
    // How many steps needed to go i to 1
    if( i == 1) return 0 ; // Base case

    if(step[i] != -1 ) return step[i] ;
    int ans = min_steps(i-1) + 1 ;
    if(i%2 == 0) {
        ans = min(ans , min_steps(i/2) + 1 ) ;
    }
    if(i%3 == 0) {
        ans = min(ans , min_steps(i/3) + 1 ) ;
    }
    step[i] = ans ;
    return step[i] ;
}
int32_t main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    memset(step , -1 , sizeof step) ;
    cout<<min_steps(10000)<<'\n' ;
}

/* ITERATIVE
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int step[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 100000;
  step[1] = 0;
  for (int i = 2; i <= n; i++) {
    int ans = step[i - 1] + 1;
    if (i % 2 == 0) {
      ans = min(ans, step[i / 2] + 1);
    }
    if (i % 3 == 0) {
      ans = min(ans, step[i / 3] + 1);
    }
    step[i] = ans;
  }
  cout << step[n] << '\n';
  return 0;
}

Here Iterative is better for 1e5 when i set n = 1e5 in recursive it is not giving answer but the iterative does gives the answer .
*/
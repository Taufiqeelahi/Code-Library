#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
bool f[N];
int32_t main() 
{
  auto st = clock() ;
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = N - 9;
  vector<int> primes;
  f[1] = true;
  for (int i = 2; i <= n; i++) 
  {
    if (!f[i]) 
    {
      primes.push_back(i);
      for (int j = i + i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  cout << primes.size() << '\n';
  cerr<<1.0 * (clock()-st)/CLOCKS_PER_SEC <<endl;
  return 0;
}
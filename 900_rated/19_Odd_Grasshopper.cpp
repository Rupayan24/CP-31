#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll x, n;
    cin >> x >> n;

    ll jumps;

    if(n % 4 == 1)
    {
      jumps = -n;
    }

    else if(n % 4 == 2)
    {
      jumps = 1;
    }

    else if(n % 4 == 3)
    {
      jumps = n + 1;
    }

    else if(n % 4 == 0)
    {
      jumps = 0;
    }

    if(x % 2 == 0)
    {
      cout << x + (jumps) << endl;
    }

    else
    {
      cout << x - (jumps) << endl;
    }
  }

  return 0;
}
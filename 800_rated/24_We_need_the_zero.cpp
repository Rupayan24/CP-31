#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    ll total_xor = 0;

    for (ll i = 0; i < n; i++)
    {
      total_xor ^= a[i];
    }

    if( n % 2 != 0)
    {
      cout << total_xor << endl;
    }

    else
    {
      if(total_xor == 0)
      {
        cout << 0 << endl;
      }

      else
      {
        cout << -1 << endl;
      }
    }
  }

  return 0;
}
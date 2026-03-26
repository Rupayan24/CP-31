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

    ll k = abs(a[0] - 1);

    for (ll i = 1; i < n; i++)
    {
      k = __gcd(k, abs(a[i] - (i + 1)));
    }

    cout << k << endl;
  }

  return 0;
}
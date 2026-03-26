#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    ll max_value = 0;
    ll min_value = 0;
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
      sum += a[i];
      max_value += ceil(a[i] * 1.0 / x);
    }

    for (ll i = 0; i < n; i++)
    {
      min_value = ceil(sum * 1.0 / x);
    }

    cout << min_value << " " << max_value << endl;
  }

  return 0;
}
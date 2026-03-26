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

    ll max_value = a[n - 1] - a[0];

    for (ll i = 1; i < n; i++)
    {
      max_value = max(max_value, a[i] - a[0]);
    }

    for (ll i = 0; i < n - 1; i++)
    {
      max_value = max(max_value, a[n - 1] - a[i]);
    }

    for (ll i = 0; i < n - 1; i++)
    {
      max_value = max(max_value, a[i] - a[i + 1]);
    }

    cout << max_value << endl;
  }
  return 0;
}
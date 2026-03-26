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
      cin >> a[i];

    sort(a.begin(), a.end());

    ll min_value = a[0];
    ll max_value = a[n - 1];

    if(max_value == min_value)
    {
      cout << "No" << endl;
      continue;
    }

    vector<ll> b(n);

    b[0] = a[n - 1];

    for (ll i = 1; i < n; i++)
    {
      b[i] = a[i - 1];
    }

    cout << "Yes" << endl;
    for (ll i = 0; i < n; i++) 
    {
      cout << b[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
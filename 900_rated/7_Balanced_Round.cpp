#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    ll counter = 1;

    ll max_length = 1;

    sort(a.begin(), a.end());

    for (ll i = 1; i < n; i++)
    {
      if(a[i] - a[i-1] <= k)
      {
        counter++;
      }

      else
      {
        counter = 1;
      }

      max_length = max(max_length, counter);
    }

    cout << n - max_length << endl;
  }

  return 0;
}
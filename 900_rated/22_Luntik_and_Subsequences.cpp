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

    ll zero_count = 0;
    ll one_count = 0;

    for (ll i = 0; i < n; i++)
    {
      if(a[i] == 0)
      {
        zero_count++;
      }

      else if(a[i] == 1)
      {
        one_count++;
      }
    }

    ll zero_total = pow(2, zero_count);

    cout << zero_total * one_count << endl;
  }
}
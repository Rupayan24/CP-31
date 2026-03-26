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

    vector<ll> a(n*k);

    for (ll i = 0; i < n*k; i++)
    {
      cin >> a[i];
    }
    
    ll pointer = n * k;

    ll sum = 0;
    while(k--)
    {
      pointer -= (n / 2) + 1;
      sum += a[pointer];
    }
    cout << sum << endl;
  }
}
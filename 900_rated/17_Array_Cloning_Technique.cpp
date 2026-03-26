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

    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
      mp[a[i]]++;
    }

    ll curr_freq = 0;

    for(auto i : mp)
    {
      curr_freq = max(curr_freq, i.second);
    }

    ll operations = 0;
    while(curr_freq < n)
    {
      operations++;

      if(curr_freq * 2 <= n)
      {
        operations += curr_freq;
        curr_freq *= 2;
      }

      else
      {
        operations += n - curr_freq;
        curr_freq = n;
      }
    }

    cout << operations << endl;
  }
}
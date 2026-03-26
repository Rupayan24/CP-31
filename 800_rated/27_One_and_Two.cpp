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

    ll total_count = 0;
    ll prefix_count = 0;
    
    ll ans = -1;

    for (ll i = 0; i < n; i++)
    {
      if(a[i] == 2)
      {
        total_count++;
      }
    }

    for (ll i = 0; i < n; i++)
    {
      if(a[i] == 2)
        prefix_count++;

      if(prefix_count == (total_count - prefix_count))
      {
        ans = i + 1;
        break;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
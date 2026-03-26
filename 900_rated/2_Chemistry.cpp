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

    string s;
    cin >> s;

    vector<ll> count(26,0);

    for (ll i = 0; i < n; i++)
    {
      ll idx = s[i] - 'a';
      count[idx]++;
    }

    ll count_odd = 0;

    for (ll i = 0; i < 26; i++)
    {
      if(count[i] % 2 != 0)
      {
        count_odd++;
      }
    }

    if((count_odd - 1) <= k)
    {
      cout << "Yes" << endl;
    }

    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}
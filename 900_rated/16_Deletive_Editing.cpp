#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
    string s;
    cin >> s;

    string t;
    cin >> t;

    ll n = s.size();
    ll m = t.size();

    vector<ll> freq_in_t(26, 0);

    for (ll i = 0; i < m; i++)
    {
      freq_in_t[t[i] - 'A']++;
    }

    for (ll i = n - 1; i >= 0; i--)
    {
      if(freq_in_t[s[i] - 'A'] > 0)
      {
        freq_in_t[s[i] - 'A']--;
      }

      else
      {
        s[i] = '.';
      }
    }

    string final_string = "";

    for (ll i = 0; i < n; i++)
    {
      if(s[i] != '.')
      {
        final_string += s[i];
      }
    }

    if(final_string == t)
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
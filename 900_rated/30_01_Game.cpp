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

    ll one_count = 0;
    ll zero_count = 0;

    for (ll i = 0; i < s.size(); i++)
    {
      if(s[i] == '1')
      {
        one_count++;
      }

      else
      {
        zero_count++;
      }
    }

    ll total = min(one_count, zero_count);

    if(total % 2 == 1)
    {
      cout << "DA" << endl;
    }

    else
    {
      cout << "NET" << endl;
    }
  }

  return 0;
}
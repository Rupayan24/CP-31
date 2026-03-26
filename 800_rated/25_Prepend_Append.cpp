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

    string s;
    cin >> s;

    ll ans = n;

    ll i = 0;
    ll j = n - 1;

    while(i <= j)
    {
      if(s[i] != s[j])
      {
        ans -= 2;
      }
      
      else
      {
        break;
      }

      i++;
      j--;
    }

    cout << ans << endl;
  }

  return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    

    ll moves = 0;

    if(d < b)
    {
      cout << -1 << endl;
      continue;
    }

    else
    {
      moves = d - b;

      a += moves;

      if(c > a)
      {
        cout << -1 << endl;
        continue;
      }

      else
      {
        moves += a - c;
      }
    }

    cout << moves << endl;
    }

  return 0;
}
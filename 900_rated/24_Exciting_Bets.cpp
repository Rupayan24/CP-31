#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
    ll a, b;
    cin >> a >> b;

    if(a == b)
    {
      cout << 0 << " " << 0 << endl;
      continue;
    }

    if(b > a)
    {
      swap(a, b);
    }

    ll gcd_value = a - b;

    ll min_steps = min(b % gcd_value, gcd_value - b % gcd_value);

    cout << gcd_value << " " << min_steps << endl;
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll n, k, x;
    cin >> n >> k >> x;

    ll max_sum = 0;

    ll min_sum = k * (k + 1) / 2;

    for (ll i = n; i >= n - k + 1; i--)
    {
      max_sum += i;
    }

    if(x >= min_sum && x <= max_sum)
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
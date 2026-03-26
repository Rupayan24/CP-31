#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int x)
{
  ll count_zeroes = 0;
  ll count_digits = 0;
  while(x)
  {
    if(x % 10 == 0)
    {
      count_zeroes++;
    }
    count_digits++;
    x /= 10;
  }

  return count_zeroes == count_digits - 1;
}

int main ()
{

  vector<ll> a;
  for (ll i = 1; i <= 999999; i++)
  {
    if(check(i) == true)
    {
      a.push_back(i);
    }
  }

  ll t;
  cin >> t;
  while(t--)
  {
    ll n;
    cin >> n;
    ll answers = 0;

    for (ll i = 0; i < a.size(); i++)
    {
      if(a[i] <= n)
      {
        answers++;
      }
      else
      {
        break;
      }
    }

    cout << answers << endl;
  }

  return 0;
}
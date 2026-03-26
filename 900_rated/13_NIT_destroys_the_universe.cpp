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

    ll count_of_zero = 0;

    for (ll i = 0; i < n; i++)
    {
      if(a[i] == 0)
      {
        count_of_zero++;
      }
    }

    bool zero_found = false;
    ll left = 0;
    ll right = n - 1;

    while(a[left] == 0)
    {
      left++;
    }

    while(a[right] == 0)
    {
      right--;
    }

    for (ll i = left + 1; i <= right - 1;i++)
    {
      if(a[i] == 0)
      {
        zero_found = true;
      }
    }

    if(count_of_zero == n)
    {
      cout << 0 << endl;
    }

    else if(zero_found)
    {
      cout << 2 << endl;
    }

    else
    {
      cout << 1 << endl;
    }
  }

  return 0;
}
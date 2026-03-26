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

    ll operations = 0;

    for (ll i = 0; i < n-1; i++)
    {
      if(a[i] % 2 == a[i+1] % 2)
      {
        operations++;
      }
    }

    cout << operations << endl;
  }

  return 0;
}
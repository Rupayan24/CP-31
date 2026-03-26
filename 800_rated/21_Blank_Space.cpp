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

    int max_count = 0;
    int count = 0;

    for (ll i = 0; i < n; i++)
    {
      

      if(a[i] == 0)
      {
        count++;
      }

      else
      {
        
        count = 0;
      }

      max_count = max(max_count, count);

      
    }

    cout << max_count << endl;
  }

  return 0;
}
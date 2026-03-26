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

    ll min_bus;
    ll max_bus;

    if(n < 4 || n % 2 != 0)
    {
      cout << -1 << endl;
    }
    else
    {
    min_bus = ((n + 5) / 6); 
    max_bus = n / 4;

    cout << min_bus << " " << max_bus << endl;
    }
  }

  return 0;
}
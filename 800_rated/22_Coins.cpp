#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll n, k;
    cin >> n >> k;

    if(n % 2 != 0 && k % 2 == 0)
    {
      cout << "No" << endl;
    }

    else
    {
      cout << "Yes" << endl;
    }
  }

  return 0;
}
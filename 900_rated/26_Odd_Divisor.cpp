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

    bool final_odd = false;

    while(n % 2 == 0)
    {
      n /= 2;
    }

    if(n > 1)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}
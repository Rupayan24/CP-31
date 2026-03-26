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

    ll i, j, k;
    bool found = false;

    for (ll j = 1; j < n - 1; j++)
    {
      i = -1;
      k = -1;

      bool left_found = false;
      bool right_found = false;

      for (ll left = 0; left < j; left++)
      {
        if(a[left] < a[j])
        {
          i = left;
          left_found = true;
        }
      }

      for (ll right = j + 1; right < n; right++)
      {
        if(a[j] > a[right])
        {
          k = right;
          right_found = true;
        }
      }

      if(left_found == true && right_found == true)
      
      {
        cout << "Yes" << endl;
        cout << i+1 << " " << j+1 << " " << k+1 << endl;
        found = true;
        break;
      }
    }

    if(found == false)
    {
      cout << "No" << endl;
    }
  }

  return 0;
}
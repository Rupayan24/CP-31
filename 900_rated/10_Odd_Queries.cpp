#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll n, q;
    cin >> n >> q;

    ll old_sum = 0;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
      old_sum += a[i];
    }

    vector<ll> prefix_sum(n+1,0); // n + 1 because 1 to n --> not 0 to n - 1 
    // We are using one based indexing here because l,r are in one based indexing
    

    for (ll i = 1; i <= n; i++)
    {
      prefix_sum[i] = prefix_sum[i - 1] + a[i-1]; // a[i-1] as the array is zero based indexing
    }

      while (q--)
      {
        ll l, r, k;
        cin >> l >> r >> k;

        ll segmented_sum = prefix_sum[r] - prefix_sum[l - 1];

        ll new_segmented_sum = (r - l + 1) * k;

        ll new_sum = old_sum - segmented_sum + new_segmented_sum;

        if(new_sum % 2 != 0)
        {
          cout << "Yes" << endl;
        }

        else
        {
          cout << "No" << endl;
        }
      }
  }

  return 0;
}

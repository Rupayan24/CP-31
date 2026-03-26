#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;

  while(t--)
  {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    vector<long long> b, c;
    long long mx = *max_element(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
      if(a[i] % mx != 0)  // If a[i] % mx != 0 then it is not a divisor ,so i can put it in B - array
      {
        b.push_back(a[i]);
      }

      else // Else it is a divisor of mx, so i need to put this in C - array
      {
        c.push_back(a[i]);
      }
    }

    if(b.size() == 0)
    {
      cout << -1 << endl;
    }

    else
    {
      cout << b.size() << " " << c.size() << endl;

      for(auto i : b)
      {
        cout << i << " ";
      }
      cout << endl;

      for(auto i : c)
      {
        cout << i << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
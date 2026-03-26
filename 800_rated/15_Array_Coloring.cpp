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

    for (long long int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int odd_count = 0;

    for (long long i = 0; i < n; i++)
    {
      if(a[i] % 2 != 0)
      {
        odd_count++;
      }
    }

    if(odd_count % 2 != 0)
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
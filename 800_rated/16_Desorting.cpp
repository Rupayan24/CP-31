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
    for (long long i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    long long min_operations = INT_MAX;

    for (long long i = 0; i < n-1; i++)
    {
      if(a[i] <= a[i + 1])
      {
        long long d = a[i + 1] - a[i];
        long long operations = d / 2 + 1;

        min_operations = min(min_operations, operations);
      }

      else
      {
        min_operations = 0;
      }
    }

    cout << min_operations << endl;
  }

  return 0;
}
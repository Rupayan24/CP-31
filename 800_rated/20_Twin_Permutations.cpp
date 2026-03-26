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
    vector<long long> b(n);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++) // Make all the a[i] + b[i] equal
    {
      cout << n + 1 - a[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
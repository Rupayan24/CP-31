#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) // O(n)
    {
      cin >> a[i];
      //inputs
    }

    vector<long long> copy_a = a; // O(n)

    sort(copy_a.begin(), copy_a.end()); // O(nlogn)

    if(copy_a == a || k > 1) // O(n)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}

// tc = O(nlogn)
// sc = O(n)
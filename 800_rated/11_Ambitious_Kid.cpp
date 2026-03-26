#include<bits\stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int min_value = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    min_value = min(min_value, abs(a[i]));
  }

  cout << min_value << endl;

  return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  long long t;
  cin >> t;

  while(t--)
  {
    long long n;
    cin >> n;

    long long i = 1;

    while(n % i == 0)
    {
      i++;
    }

    cout << i - 1 << endl;
  }

  return 0;
}
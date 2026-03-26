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

    string s;
    cin >> s;

    ll count = 2;
    ll long_count = 2;

    for (int i = 0; i < s.size()-1; i++)
    {
      if(s[i] == s[i+1])
      {
        count++;
      }

      else
      {
        count = 2;
      }

      long_count = max(long_count, count);
    }
    cout << long_count << endl;
  }
}
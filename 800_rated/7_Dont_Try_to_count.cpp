#include<bits/stdc++.h>
using namespace std;

bool check(string x, string s)
{
  //  x turns like a --> aa --> aaaa
  if(x.size() < s.size()) //  if s = aaaaa and x = aaaa, s can't be substring of x
  {
    return false;
  }

  for (int i = 0; i < x.size() - s.size() + 1; i++) // Using sliding window technique to calculate no of iterations aaaaa = 5, aaaa = 4 so i = (5-4) + 1 = 1 + 1 = 2 ---> either first 4 aaaa will be substr or last 4 aaaa will be substr
  {
    if(x.substr(i, s.size()) == s)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long n, m;
    cin >> n >> m;

    string x;
    cin >> x;
    string s;
    cin >> s;


    // As m size in question is at max 25, no  at max 2^5 = 32 can be the size of x, so if we check at make 5 concatenations, then also we can find out the ans
    string x0 = x; // concatenation a --> a
    string x1 = x0 + x0; //  a ---> aa
    string x2 = x1 + x1; // aa ---> aaaa
    string x3 = x2 + x2; // aaaa ---> aaaaaaaa
    string x4 = x3 + x3; // aaaaaaaa ---> aaaaaaaaaaaaaaaa
    string x5 = x4 + x4; // aaaaaaaaaaaaaaaa ---> aaaaaaaaaaaaaaaa

    long long ans = -1;

    if(check(x0,s))
    {
      ans = 0;
    }

    else if(check(x1,s))
    {
      ans = 1;
    }

    else if(check(x2,s))
    {
      ans = 2;
    }

    else if(check(x3,s))
    {
      ans = 3;
    }

    else if(check(x4,s))
    {
      ans = 4;
    }

    else if(check(x5,s))
    {
      ans = 5;
    }

    cout << ans << endl;
  }
}
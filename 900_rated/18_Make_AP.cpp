#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll t;
  cin >> t;

  while(t--)
  {
    ll a, b ,c;
    cin >> a >> b >> c;

    ll new_a = ((2 * b) - c);

    ll new_b = ((a + c) / 2);

    ll new_c = ((2 * b) - a);

    bool answer = false;

    if(new_a / a > 0 && new_a % a == 0)
    {
      answer = true;
    }

    if(new_b / b > 0 && new_b % b == 0  && (c - a) % 2 == 0)
    {
      answer = true;
    }

    if(new_c / c > 0 && new_c % c == 0)
    {
      answer = true;
    }

    if(answer)
    {
      cout << "Yes" << endl;
    }

    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}
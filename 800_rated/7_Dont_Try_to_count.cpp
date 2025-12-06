/*
Given a string x
 of length n
 and a string s
 of length m
 (n⋅m≤25
), consisting of lowercase Latin letters, you can apply any number of operations to the string x
.

In one operation, you append the current value of x
 to the end of the string x
. Note that the value of x
 will change after this.

For example, if x=
"aba", then after applying operations, x
 will change as follows: "aba" →
 "abaaba" →
 "abaabaabaaba".

After what minimum number of operations s
 will appear in x
 as a substring? A substring of a string is defined as a contiguous segment of it.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two numbers n
 and m
 (1≤n⋅m≤25
) — the lengths of strings x
 and s
, respectively.

The second line of each test case contains the string x
 of length n
.

The third line of each test case contains the string s
 of length m
.

Output
For each test case, output a single number — the minimum number of operations after which s
 will appear in x
 as a substring. If this is not possible, output −1
.

Example
InputCopy
12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm
OutputCopy
3
1
2
-1
1
0
1
3
1
0
2
5
Note
In the first test case of the example, after 2
 operations, the string will become "aaaa", and after 3
 operations, it will become "aaaaaaaa", so the answer is 3
.

In the second test case of the example, after applying 1
 operation, the string will become "eforceforc
", where the substring is highlighted in red.

In the fourth test case of the example, it can be shown that it is impossible to obtain the desired string as a substring.
*/


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
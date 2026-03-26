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

    int positive_count = 0;
    int negative_count = 0;

    for (long long i = 0; i < n; i++)
    {
      if(a[i] == 1)
      {
        positive_count++;
      }
      else
      {
        negative_count++;
      }
    }

    int op = 0;
      
        while(negative_count > positive_count)
        {
          op++;
          negative_count--;
          positive_count++;
        }
      

      if(negative_count % 2 != 0) // product
      {
        op++;
      }

      cout << op << endl;
  }
}
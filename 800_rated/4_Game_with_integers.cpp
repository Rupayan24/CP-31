#include<bits\stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;

    // Check if n is divisible by 3
    if(n % 3 == 0) // If n is divisible by 3, Vova wins
    {
      cout << "Second" << endl; // Output "Second"  indicating Vova wins
    }

    else
    {
      cout << "First" << endl;  // Output "First" indicating Vanya wins
    }
  }
  return 0;
}
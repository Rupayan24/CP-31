#include<bits\stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t; // Read the number of test cases
  while(t--)
  {
    int n;
    cin >> n; // Read the number of cells in current test case

    string s;
    cin >> s; // Read the string representing the row of cells

    
    // Initialize a flag to check for three continuous empty cells
    bool three_consecutive_cells = false;

    // Initialize a counter for the total number of empty cells
    int empty_cells = 0;

    for (int i = 0; i < n; i++) // Iterate through the cells
    {
      // Check if three consecutive empty cells are there
      if (s[i] == '.' && ((i + 1 < n) && s[i + 1] == '.') && ((i + 2 < n) && s[i + 2] == '.'))
      {
        three_consecutive_cells = true;
        break;
      }
      
      // Count the total number of empty cells
      if(s[i] == '.')
      {
        empty_cells++;
      }
    }

    //  if three consecutive empty cells are there, we need only 2 actions
    if(three_consecutive_cells)
    {
      cout << 2 << endl;
    }

    // Otherwise,  number of actions needed to be equal to the number of empty cells
    else
    {
      cout << empty_cells << endl;
    }
  }
  return 0;
}

//TC = O(n)
//SC = O(n)
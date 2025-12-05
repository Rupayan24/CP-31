/*
A. Doremy's Paint 3
time limit per test1 second
memory limit per test256 megabytes
An array b1,b2,…,bn
 of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a k
 such that b1+b2=b2+b3=…=bn−1+bn=k
.

Doremy has an array a
 of length n
. Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤105
).

There are no constraints on the sum of n
 over all test cases.

Output
For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
OutputCopy
Yes
Yes
No
No
Yes
Note
In the first test case, [8,9]
 and [9,8]
 are good.

In the second test case, [1,2,1]
 is good because a1+a2=a2+a3=3
.

In the third test case, it can be shown that no permutation is good.



*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t; // Number of test cases
  cin >> t;
  while(t--)
  {
    long long n; // Length of the array
    cin >> n;

    vector<long long> a(n); // Array to store the elements
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    //Map to store the frequency of each element in the array
    map<long long, long long> frequency_map;
    for (int i = 0; i < n; i++)
    {
      frequency_map[a[i]]++; // Calculate the freq of each element
    }

    if(frequency_map.size() >= 3) // If there are three or more distinct elements
    {
      cout << "No" << endl; // It is not possible to make the array good
    }

    else
    // Get the fre of the smallest and largest elements
    {
      long long freq_1 = frequency_map.begin()->second;
      long long freq_2 = frequency_map.rbegin()->second;
      
      // Check if the array can be made good
      if(freq_1 == freq_2) // If both the freq are equal
      {
        cout << "Yes" << endl; // the array can be made good
      }

      else if(n % 2 == 1 && abs(freq_1 - freq_2) == 1) // If the array length is odd and the freq difference is 1
      {
        cout << "Yes" << endl; // the array can be made good
      }

      else
      {
        cout << "No" << endl; // the array can't be made good
      }
    }
  }

  return 0;
}
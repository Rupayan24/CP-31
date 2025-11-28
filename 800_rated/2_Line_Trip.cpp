#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;  // Number of test cases
  cin >> t;
  while(t--)
  {
    long long n, x; // n = number of gas stations, x = destination
    cin >> n >> x;

    vector<long long> points_arr; // Array to store starting point, gas stations and destination

    points_arr.push_back(0); // Start Point

    for (int i = 0; i < n; i++)
    {
      long long points;
      cin >> points; // Read each gas station point
      points_arr.push_back(points); //  Add each gas station point to the array
    }

    points_arr.push_back(x); // Add Destination point

    n = points_arr.size(); // Update n to include starting point, gas stations and destination

    long long max_distance_btw_points = INT_MIN;

    for (int i = 1; i < n; i++)
    {
      if(i == n - 1)
      {
        max_distance_btw_points = max(max_distance_btw_points, 2 * (points_arr[i] - points_arr[i - 1])); // Consider the round trip distance
      }

      else
      {
        max_distance_btw_points = max(max_distance_btw_points, (points_arr[i] - points_arr[i - 1])); // Consider the one-way distance
      }
    }

    cout << max_distance_btw_points << endl; // Output the minimum tank capacity required
  }

  return 0;
}
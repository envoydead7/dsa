#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n; // Read the number of digits
  string digits;
  cin >> digits; // Read the digits as a single string

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (digits[i] - '0'); // Convert character to integer and add to sum
  }

  cout << sum << endl; // Print the sum
  return 0;
}
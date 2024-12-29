#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 0) {
      cout << 0 << endl; // Handle edge case
      continue;
    }
    vector<int> v;
    while (n > 0) {
      int digit = n % 10;
      n = n / 10;
      v.push_back(digit);
    }
    for (int i = 0; i < v.size(); i++) {
      cout << v[i];
      if (i != v.size() - 1) {
        cout << " "; // Add space only if it's not the last digit
      }
    }
    cout << endl; // Move to the next line
  }
  return 0;
}
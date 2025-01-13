#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
      // Start a new subarray at index i
      int j = i;
      // Extend the subarray as far as possible
      while (j + 1 < n && A[j] <= A[j + 1]) {
        j++;
      }
      // Calculate the number of subarrays ending at j
      int len = j - i + 1;
      count += len * (len + 1) / 2; // Add all subarrays of length 1 to len
      i = j; // Move i to the end of the current subarray
    }

    cout << count << endl;
  }
  return 0;
}
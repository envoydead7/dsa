#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int x;
  cin >> x;

  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      cout << i << endl;
      return 0; // Exit the program after finding the first occurrence
    }
  }

  // If X is not found, print -1
  cout << -1 << endl;
}
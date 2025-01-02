#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int n) {
  cin >> n;
  int a[n];
  int temp[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];               // Read the array
  }
  // Reverse the array
  for (int i = 0; i < n; i++) {
    temp[i] = a[n - 1 - i]; // Copy elements in reverse order
  }
  // Compare the original and reversed arrays
  for (int i = 0; i < n; i++) {
    if (a[i] != temp[i]) {
      cout << "NO" << endl;
      return 0; // Exit if any mismatch is found
    }
  }
  // If all elements match
  cout << "YES" << endl;
  return 0;
}

//2 pointer approach #include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  // Read the array
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // Initialize two pointers
  int left = 0;          // Pointer to the start of the array
  int right = n - 1;     // Pointer to the end of the array
  // Compare elements using two pointers
  while (left < right) {
    if (a[left] != a[right]) {
      cout << "NO" << endl; // Not a palindrome
      return 0;
    }
    left++;  // Move left pointer forward
    right--; // Move right pointer backward
  }
  // If all corresponding elements match
  cout << "YES" << endl;
  return 0;
}
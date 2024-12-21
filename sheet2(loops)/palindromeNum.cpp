#include <iostream>
using namespace std;

void isPalindrome(long long n) {
  long long orgN = n;
  long long revN = 0; // Initialize revN to 0

  while (n > 0) { // Loop while n is greater than 0
    int ld = n % 10;
    revN = revN * 10 + ld;
    n = n / 10;
  }
  cout << revN << endl; // Print the reversed number
  if (revN == orgN) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  long long n;
  cin >> n;
  isPalindrome(n);
  return 0;
}
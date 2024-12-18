#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    long long fact = 1;
    for (int i = 1; i <= n; i++) {
      fact = fact * i;
    }

    cout << fact << endl; // Output each result on a new line
  }

  return 0;
}

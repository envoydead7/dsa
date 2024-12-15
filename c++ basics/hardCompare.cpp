#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == 0 || c == 0) {
    if (a > c) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    double sum1 = b * log(a);
    double sum2 = d * log(c);
    if (sum1 > sum2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
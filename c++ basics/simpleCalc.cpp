#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin>>x>>y;
  int sum = x + y;
  int sub = x - y;
  int mul = x * y;

  cout << x << " " << "+ " << y << " = " << sum << endl;
  cout << x << " " << "* " << y << " = " << mul << endl;
  cout << x << " " << "- " << y << " = " << sub << endl;
}
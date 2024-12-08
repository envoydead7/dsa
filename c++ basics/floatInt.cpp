#include <bits/stdc++.h>
using namespace std;

int main() {
  double n;
  cin>>n;
  if (n != floor(n)) {
    double integerPart = floor(n);
    double decimalPart = n - integerPart;  // Calculate the decimal part
    std::cout << "float " << integerPart << " " << decimalPart << std::endl;
  } else {
    std::cout << "int " << n << std::endl;
  }
}
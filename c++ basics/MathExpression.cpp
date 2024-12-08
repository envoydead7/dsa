#include <iostream>

int main() {
  long long a, b, c;
  char s; // '+,-,*'
  char q; // '='
  std::cin >> a >> s >> b >> q >> c;

  if (s == '+') {
    long long sum = a + b;
    if (sum == c) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << sum << std::endl; // Print the correct sum
    }
  } else if (s == '-') {
    long long sum2 = a - b;
    if (sum2 == c) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << sum2 << std::endl; // Print the correct difference
    }
  } else if (s == '*') {
    long long sum3 = a * b;
    if (sum3 == c) { // Use sum3 here
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << sum3 << std::endl; // Print the correct product
    }
  }

  return 0;
}
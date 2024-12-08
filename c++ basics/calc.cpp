#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  // Locate the operator in the string
  size_t pos = s.find_first_of("+-*/");

  // Extract operands and operator
  string A = s.substr(0, pos);
  string B = s.substr(pos + 1);
  int num1 = stoi(A);
  int num2 = stoi(B);
  char op = s[pos];

  // Perform the operation based on the operator
  switch (op) {
    case '+':
      cout << num1 + num2 << endl;
    break;
    case '-':
      cout << num1 - num2 << endl;
    break;
    case '*':
      cout << num1 * num2 << endl;
    break;
    case '/':
      if (num2 != 0) {  // Division by zero check
        cout << num1 / num2 << endl;
      }
    break;
    default:
      cout << "Invalid operator" << endl;
  }

  return 0;
}

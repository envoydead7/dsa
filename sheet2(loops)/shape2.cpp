#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    // Print spaces
    for (int j = 1; j <= N - i; j++) {
      cout << " ";
    }
    // Print stars
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    // Move to the next line
    cout << endl;
  }
  return 0;
}
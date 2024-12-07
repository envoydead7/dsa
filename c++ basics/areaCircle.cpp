#include <bits/stdc++.h>

using namespace std;

int main() {
  // Set precision to 9 digits after decimal point
  cout << fixed << setprecision(9);

  // Variable to store the radius
  double R;

  // Read the radius
  cin >> R;

  // Calculate the area using π * R^2
  double area = 3.141592653 * pow(R, 2);

  // Print the area
  cout << area << endl;

  return 0;
}
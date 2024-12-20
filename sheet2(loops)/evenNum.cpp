#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    bool foundEven = false; // Declare and initialize the boolean variable

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
            foundEven = true; // Set to true if an even number is found
        }
    }

    if (!foundEven) { // Check if no even numbers were found after the loop
        cout << -1 << endl;
    }

    return 0;
}
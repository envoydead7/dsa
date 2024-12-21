#include <iostream>
#include <cmath> // Include for sqrt()
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true; // Assume i is prime initially

        for (int j = 2; j <= sqrt(i); j++) { // Optimized inner loop limit
            if (i % j == 0) {
                isPrime = false; // Set to false if a divisor is found
                break; // No need to check further
            }
        }

        if (isPrime) { // Check if isPrime is still true after the inner loop
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
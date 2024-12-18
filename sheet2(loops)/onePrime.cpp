#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) {
        return false; // Numbers less than 2 are not prime
    }
    for (int i = 2; i <= sqrt(x); i++) { // Start from 2 and go up to sqrt(x)
        cout<<sqrt(x)<<endl;
        if (x % i == 0) { // Check if x is divisible by i
            return false; // If divisible, x is not prime
        }
    }
    return true; // If no divisors found, x is prime
}

int main() {
    int x; // Use int since the input range is specified as 2 ≤ X ≤ 100000
    cin >> x;

    if (isPrime(x)) {
        cout << "YES" << endl; // Output YES if prime
    } else {
        cout << "NO" << endl; // Output NO if not prime
    }

    return 0;
}

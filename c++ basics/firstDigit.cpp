#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;  // Read the input number
 
    int first_digit = n / 1000;  // Extract the first digit
 
    // Check if the first digit is even or odd
    if (first_digit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
 
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is lucky
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num = num / 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;
    vector<int> luckyNumbers;

    // Loop through all numbers from A to B
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }

    // Check if any lucky numbers were found
    if (luckyNumbers.empty()) {
        cout << -1 << endl;
    } else {
        // Print all lucky numbers separated by space
        for (int num : luckyNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


Copy
#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max

void bruteForceSolve() {
    int N, M;
    while (std::cin >> N >> M) {
        if (N <= 0 || M <= 0) {
            break;
        }
        int lower = std::min(N, M);
        int higher = std::max(N, M);
        std::vector<int> sequence;
        long long sum = 0;
        for (int i = lower; i <= higher; i++) {
            sequence.push_back(i);
            sum += i;
        }
        for (int num : sequence) {
            std::cout << num << " ";
        }
        std::cout << "sum =" << sum << std::endl;
    }
}

void efficientSolve() {
    int m, n;
    while (cin >> m >> n) {
        if (m <= 0 || n <= 0) break; // Terminate if either number is <= 0
        int low = min(m, n);
        int high = max(m, n);
        long long sum = 0; // Reset sum for each test case
        for (int i = low; i <= high; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
}

int main() {
    efficientSolve();
    return 0;
}
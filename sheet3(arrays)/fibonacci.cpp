#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    int prev = 0, curr = 1;
    for (int i = 3; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int N;
    cin >> N;
    cout << fib(N) << endl;
    return 0;
}
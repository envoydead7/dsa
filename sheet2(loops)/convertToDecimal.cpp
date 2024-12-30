#include <iostream>

int countOnes(unsigned int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        unsigned int N;
        std::cin >> N;
        int count = countOnes(N);
        unsigned int result = (1u << count) - 1;
        std::cout << result << std::endl;
    }
    return 0;
}
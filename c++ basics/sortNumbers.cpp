#include <iostream>

int main() {
    long long a, b, c, tempa, tempb, tempc;
    std::cin >> a >> b >> c;
    tempa = a;
    tempb = b;
    tempc = c;

    if (tempa > tempb) {
        std::swap(tempa, tempb);
    }
    if (tempa > tempc) {
        std::swap(tempa, tempc);
    }
    if (tempb > tempc) {
        std::swap(tempb, tempc);
    }

    std::cout << tempa << std::endl;
    std::cout << tempb << std::endl;
    std::cout << tempc << std::endl;
    std::cout << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}
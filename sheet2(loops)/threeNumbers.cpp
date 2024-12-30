#include <iostream>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;
    
    int count = 0;
    for (int X = 0; X <= min(K, S); ++X) {
        for (int Y = 0; Y <= min(K, S - X); ++Y) {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
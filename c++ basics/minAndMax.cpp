#include <iostream>
using namespace std;
 
int main() {
    long long A, B, C;
    
    // Read input
    cin >> A >> B >> C;
    
    // Find minimum
    int minNum = A;
    if (B < minNum) minNum = B;
    if (C < minNum) minNum = C;
    
    // Find maximum
    int maxNum = A;
    if (B > maxNum) maxNum = B;
    if (C > maxNum) maxNum = C;
    
    // Print result
    cout << minNum << " " << maxNum;
    
    return 0;
}
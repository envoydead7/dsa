#include <iostream>
 
// Custom floor function
int customFloor(double x) {
    // Convert to integer by truncating decimal part
    int intPart = static_cast<int>(x);
    
    // If x is positive, intPart is already the floor
    // If x is negative, we need to subtract 1
    return (x >= 0) ? intPart : intPart - 1;
}
 
// Custom ceil function
int customCeil(double x) {
    // Convert to integer by truncating decimal part
    int intPart = static_cast<int>(x);
    
    // If x is a whole number, return it
    // If x is positive and has decimal part, add 1
    // If x is negative and has decimal part, return intPart
    return (x == intPart) ? intPart : 
           (x >= 0) ? intPart + 1 : intPart;
}
 
// Custom round function
int customRound(double x) {
    // Add 0.5 and truncate
    // This works for both positive and negative numbers
    return static_cast<int>(x + (x >= 0 ? 0.5 : -0.5));
}
 
int main() {
    int A, B;
    
    // Read input
    std::cin >> A >> B;
    
    // Calculate division
    double division_result = static_cast<double>(A) / B;
    
    // Print results
    std::cout << "floor " << A << " / " << B << " = " << customFloor(division_result) << std::endl;
    std::cout << "ceil " << A << " / " << B << " = " << customCeil(division_result) << std::endl;
    std::cout << "round " << A << " / " << B << " = " << customRound(division_result) << std::endl;
    
    return 0;
}
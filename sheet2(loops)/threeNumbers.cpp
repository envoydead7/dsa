// #include <iostream>
// using namespace std;
//
// int main() {
//     int K, S;
//     cin >> K >> S;
//
//     int count = 0;
//     for (int X = 0; X <= min(K, S); ++X) {
//         for (int Y = 0; Y <= min(K, S - X); ++Y) {
//             int Z = S - X - Y;
//             if (Z >= 0 && Z <= K) {
//                 count++;
//             }
//         }
//     }
//
//     cout << count << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
    int large = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] > large) {
            large = nums[i];
        }
    }
    return large;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);  // ✅ Size the vector properly

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];   // ✅ Now safe to access
    }

    int result = largestElement(nums);  // ✅ Store the result
    cout << "Largest element: " << result << endl;  // ✅ Display it

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

class Solution {
public:
    // Brute-force approach using extra space
    static void moveZeroesBruteForce(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        // Step 1: Collect non-zero elements
        for (int num : nums) {
            if (num != 0) {
                result.push_back(num);
            }
        }

        // Step 2: Append zeros
        int zeros = n - result.size();
        for (int i = 0; i < zeros; i++) {
            result.push_back(0);
        }

        // Step 3: Copy back to original array
        nums = result;
    }

    // Optimal in-place approach (single pass)
    static void moveZeroesOptimal(vector<int>& nums) {
        int lastNonZeroIndex = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                if (i != lastNonZeroIndex) {
                    swap(nums[i], nums[lastNonZeroIndex]);
                }
                lastNonZeroIndex++;
            }
        }
    }

    // Choose which implementation to run
    static void moveZeroes(vector<int>& nums) {
        // moveZeroesBruteForce(nums); // Brute-force version
        moveZeroesOptimal(nums);       // Optimal in-place version
    }
};

int main() {
    Solution solution;

    // Example input
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Before: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Call the function
    solution.moveZeroes(nums);

    // Output result
    cout << "After:  ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

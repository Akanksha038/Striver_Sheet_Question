#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int xorSum = 0;

        // XOR all the elements in the array
        for (int i = 0; i < n; ++i) {
            xorSum ^= nums[i];
        }

        // XOR the result with all the numbers from 0 to n
        for (int i = 0; i <= n; ++i) {
            xorSum ^= i;
        }

        // The remaining value is the missing number
        return xorSum;
    }
};

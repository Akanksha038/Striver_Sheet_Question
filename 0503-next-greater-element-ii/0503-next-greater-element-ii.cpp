#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        vector<int> ans(n, -1); // Initialize ans with -1

        // First round of iteration
        for (int i = n - 1; i >= 0; --i) {
            int curr = nums[i];

            while (!s.empty() && nums[s.top()] <= curr) {
                s.pop();
            }

            s.push(i);
        }

        // Second round of iteration
        for (int i = n - 1; i >= 0; --i) {
            int curr = nums[i];

            while (!s.empty() && nums[s.top()] <= curr) {
                s.pop();
            }

            // If we found a next greater element, store it in ans
            if (!s.empty()) {
                ans[i] = nums[s.top()];
            }

            s.push(i);
        }

        return ans;
    }
};

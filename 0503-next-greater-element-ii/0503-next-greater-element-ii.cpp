#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); // Initialize ans with -1
        stack<int> s;

        // Iterate through the array twice for circularity
        for (int i = 0; i < 2 * n; ++i) {
            int curr = nums[i % n];

            // While there are elements in the stack and the current element is greater than the top of the stack
            while (!s.empty() && nums[s.top()] < curr) 
            {
                ans[s.top()] = curr; // Update ans for the top of the stack
                s.pop(); // Remove the top of the stack
            }

            // If we are in the first round of iteration, push the index to the stack
            if (i < n) 
            {
                s.push(i);
            }
        }

        return ans;
    }
};

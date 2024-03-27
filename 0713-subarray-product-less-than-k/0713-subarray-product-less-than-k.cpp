class Solution {
public:
    // Function to count the number of continuous subarrays 
    // where the product of all elements in the subarray is less than k
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Initialize the answer to 0
        int count = 0;
      
        // Initialize two pointers defining the sliding window
        // i is the right pointer, j is the left pointer, 
        // and product keeps the product of all elements within the window
        for (int right = 0, left = 0, product = 1; right < nums.size(); ++right) {
            // Update the product by multiplying the rightmost element
            product *= nums[right];
          
            // While the product is equal to or larger than k, 
            // increment the left pointer to reduce the product 
            // and contract the window size from the left
            while (left <= right && product >= k) {
                product /= nums[left++];
            }
          
            // The number of subarrays with a product less than k 
            // that end with nums[right] is equal to the size of the current window
            count += right - left + 1;
        }
      
        // Return the total count
        return count;
    }
};

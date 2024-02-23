class Solution {
public:
    // Function to count the minimum number of bit flips to convert start to goal.
    int minBitFlips(int start, int goal) {
        // XOR the start and goal to find the differences
        int diff = start ^ goal;
      
        // Initialize count to store the number of flips needed
        int flipCount = 0;
      
        // Loop through all the bits of diff
        while (diff) {
            // If the least significant bit is 1, it needs to be flipped
            flipCount += diff & 1;
          
            // Right shift diff to check the next bit in the next iteration
            diff >>= 1;
        }
      
        // Return the total number of flips needed to convert start to goal
        return flipCount;
    }
};

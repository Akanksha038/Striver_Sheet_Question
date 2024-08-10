class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;  // Initialize carry to 0
        string result = "";  // Initialize result as an empty string
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        // Process each digit from the end of both strings
        while (i >= 0 || j >= 0 || carry != 0) {
            int sum = carry;
            
            // Add digit from num1 if available
            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }
            
            // Add digit from num2 if available
            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }
            
            // Compute new carry and digit to be added to result
            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        // Reverse the result to get the correct order
        reverse(result.begin(), result.end());
        return result;
    }
};

class Solution {
public:
    string removeOuterParentheses(string S) {
        
         // Stores the resultant string
    string res;
 
    // Stores the count of
    // opened parentheses
    int count = 0;
 
    // Traverse the string
    for (char c : S) {
 
        // If opening parentheses is
        // encountered and their
        // count exceeds 0
        if (c == '(' && count++ > 0)
 
            // Include the character
            res += c;
 
        // If closing parentheses is
        // encountered and their
        // count is less than count
        // of opening parentheses
        if (c == ')' && count-- > 1)
 
            // Include the character
            res += c;
    }
 
    // Return the resultant string
    return res;
}
        
    
};
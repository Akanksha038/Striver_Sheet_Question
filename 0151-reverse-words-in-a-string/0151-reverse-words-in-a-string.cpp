class Solution {
public:
    string reverseWords(string s) 
    {
        string helper, res;
        reverse(s.begin(), s.end());  // Reverse the entire string

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ') 
            {
                helper += s[i];  // Build the current word
            }
            else if (!helper.empty())
            {
                reverse(helper.begin(), helper.end());  // Reverse the current word
                if (!res.empty()) res += " ";  // Add a space before the next word if the result is not empty
                res += helper;  // Add the reversed word to the result
                helper.clear();  // Clear the helper for the next word
            }
        }

        // Add the last word (if any)
        if (!helper.empty()) 
        {
            reverse(helper.begin(), helper.end());
            if (!res.empty()) res += " ";
            res += helper;
        }

        return res;
    }
};

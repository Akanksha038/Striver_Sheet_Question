class Solution {
public:
    string capitalizeTitle(string title) {
        string s = "";
        string result = "";

        for (int i = 0; i <= title.size(); i++) {
            if (i == title.size() || title[i] == ' ') {
                if (s.size() > 2) {
                    if (s[0] >= 'a' && s[0] <= 'z') {
                        s[0] -= 32;  // Convert first letter to uppercase
                    }
                    for (int j = 1; j < s.size(); j++) {
                        if (s[j] >= 'A' && s[j] <= 'Z') {
                            s[j] += 32;  // Convert other letters to lowercase
                        }
                    }
                } else {
                    for (int j = 0; j < s.size(); j++) {
                        if (s[j] >= 'A' && s[j] <= 'Z') {
                            s[j] += 32;  // Convert short words to lowercase
                        }
                    }
                }

                result += s + " ";  // Add the processed word to result
                s = "";  // Reset for the next word
            } else {
                s += title[i];  // Append character to the current word
            }
        }

        if (!result.empty() && result.back() == ' ') {
            result.pop_back();  // Remove the trailing space
        }

        return result;
    }
};

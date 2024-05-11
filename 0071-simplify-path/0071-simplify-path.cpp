#include <stack>
#include <string>

class Solution {
public:
    void buildAns(std::stack<std::string>& st, std::string& ans) {
        if (st.empty()) {
            return;
        }

        std::string minPath = st.top();
        st.pop();
        buildAns(st, ans);
        ans += minPath; // Concatenate path components without "/"
    }

    string simplifyPath(string path) {
        stack<string> st;
        int i = 0;
        while (i < path.size()) {
            int start = i;
            int end = i + 1;

            // Find next directory name
            while (end < path.size() && path[end] != '/') {
                end++;
            }

            // Extract the directory name
            string minPath = path.substr(start, end - start);

            i = end; // Move to the next position in the path

            // Handle directory names
            if (minPath != "/" && minPath != "/." && minPath != "/..") {
                st.push(minPath);
            } else if (minPath == "/.." && !st.empty()) {
                st.pop(); // Move one level up
            }
        }

        // Construct the simplified path
        string ans;
        if (st.empty()) 
        {
            ans = "/";
        } else {
            buildAns(st, ans);
        }

        return ans;
    }
};







// // Handle directory names
//             if (minPath != "/") {
//                 if (minPath != "/.") {
//                     if (minPath != "/..") {
//                         st.push(minPath); // Regular directory, push to stack
//                     } else {
//                         // Move one level up
//                         if (!st.empty()) {
//                             st.pop();
//                         }
//                     }
//                 } // else: Do nothing for "/."
//             } else {
//                 // Do nothing for "/"
//             }
//         }

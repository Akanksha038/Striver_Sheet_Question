
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustFactor(n + 1, 0);
        
        // Calculate trust factor
        for (int i = 0; i < trust.size(); i++) {
            trustFactor[trust[i][0]]--;
            trustFactor[trust[i][1]]++;
        }

        // Check for the judge
        for (int i = 1; i <= n; i++) {
            if (trustFactor[i] == n - 1)
                return i;
        }
        
        return -1; // No judge found
    }
};



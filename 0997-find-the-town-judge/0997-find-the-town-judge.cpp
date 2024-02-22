class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        // Create two vectors to store trust counts
        vector<int> trustByOthers(N + 1, 0); // Counts the number of people who trust 'i'
        vector<int> trustsOthers(N + 1, 0);  // Counts the number of people 'i' trusts

        // Calculate trust counts
        for (const auto& relation : trust) {
            int truster = relation[0]; // Person who trusts
            int trustee = relation[1]; // Person being trusted
            trustsOthers[truster]++;  // Increment trust count for the truster
            trustByOthers[trustee]++; // Increment count of being trusted for the trustee
        }

        // Find the town judge
        for (int i = 1; i <= N; ++i) {
            // The judge is the person who trusts no one else (trustsOthers[i] == 0)
            // and is trusted by everyone else (trustByOthers[i] == N - 1)
            if (trustsOthers[i] == 0 && trustByOthers[i] == N - 1) {
                return i; // Judge found
            }
        }

        // If no judge found, return -1
        return -1;
    }
};
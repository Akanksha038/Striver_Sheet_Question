// class Solution {
// public:
//     vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
//     }
// };



class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        // Flags to check if a person has discovered the secret
        vector<bool> discovered(n, false);
        // The first person and the '0'th person always know the secret
        discovered[0] = true;
        discovered[firstPerson] = true;

        // Sort meetings based on the time
        sort(meetings.begin(), meetings.end(), [](const auto& a, const auto& b) {
            return a[2] < b[2];
        });

        // Iterate through the meetings
        for (int i = 0, meetingsCount = meetings.size(); i < meetingsCount; ) {
            int endIndex = i;
            // Find all meetings that occur at the same time
            while (endIndex + 1 < meetingsCount && meetings[endIndex + 1][2] == meetings[i][2]) {
                ++endIndex;
            }
          
            // Graph to store connections during the same time
            unordered_map<int, vector<int>> graph;
            // Set to store all unique participants in the current time slot
            unordered_set<int> participants;
          
            // Build the graph for current time
            for (int k = i; k <= endIndex; ++k) {
                int personA = meetings[k][0], personB = meetings[k][1];
                graph[personA].push_back(personB);
                graph[personB].push_back(personA);
                participants.insert(personA);
                participants.insert(personB);
            }
          
            // Queue for BFS to discover all people who learn the secret
            queue<int> queuePeople;

            // Add discovered people to the queue as starting points
            for (int person : participants) {
                if (discovered[person]) {
                    queuePeople.push(person);
                }
            }

            // BFS to spread the secret among people
            while (!queuePeople.empty()) {
                int currentPerson = queuePeople.front();
                queuePeople.pop();

                for (int neighbour : graph[currentPerson]) {
                    if (!discovered[neighbour]) {
                        discovered[neighbour] = true;
                        queuePeople.push(neighbour);
                    }
                }
            }

            // Move to the next time slot
            i = endIndex + 1;
        }

        // Collect all people who know the secret
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            if (discovered[i]) {
                result.push_back(i);
            }
        }
        return result;
    }
};
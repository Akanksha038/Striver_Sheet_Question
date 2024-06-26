class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);  // Use a graph to represent the tree
        // Build the graph from the edges input
        for (auto& edge : edges) {
            int node1 = edge[0], node2 = edge[1];
            graph[node1].push_back(node2);
            graph[node2].push_back(node1);
        }
        vector<int> answer(n);   // This will hold the final answer
        vector<int> subtreeSize(n);  // This will hold the sizes of the subtrees

        // Depth-First Search (DFS) for calculating initial distances and subtree sizes
        function<void(int, int, int)> dfsCalculateDistances = [&](int node, int parent, int depth) {
            answer[0] += depth; // Add the depth to the answer for the root
            subtreeSize[node] = 1; // Initialize the size of this subtree
            // Traverse the graph
            for (int& neighbor : graph[node]) {
                if (neighbor != parent) {
                    dfsCalculateDistances(neighbor, node, depth + 1);
                    subtreeSize[node] += subtreeSize[neighbor]; // Update the size of the subtree
                }
            }
        };

        // DFS for calculating answer for each node based on the root's answer
        function<void(int, int, int)> dfsCalculateAnswer = [&](int node, int parent, int totalDistance) {
            answer[node] = totalDistance; // Set the answer for this node
            // Traverse the graph
            for (int& neighbor : graph[node]) {
                if (neighbor != parent) {
                    // Recalculate the total distance when moving the root from current node to the neighbor
                    int revisedDistance = totalDistance - subtreeSize[neighbor] + n - subtreeSize[neighbor];
                    dfsCalculateAnswer(neighbor, node, revisedDistance);
                }
            }
        };

        // Call the first DFS for the root node to initialize distances and subtree sizes
        dfsCalculateDistances(0, -1, 0);
        // Call the second DFS to calculate the answer for each node
        dfsCalculateAnswer(0, -1, answer[0]);
        return answer; // Return the final answer array
    }
};
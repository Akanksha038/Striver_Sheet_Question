class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges)
     {
        if(n==1)
        {
            return {0}; //node start from 0 to n-1
        }


        vector<vector<int>> adjacencyList(n);
        vector<int>degree(n,0);

        for(auto edge:edges)
        {
            adjacencyList[edge[0]].push_back(edge[1]);
            adjacencyList[edge[1]].push_back(edge[0]);

            degree[edge[0]]++;
             degree[edge[1]]++;

        }

      queue<int> q;
        for(int i=0;i<n;i++){
            if(degree[i]==1){
                q.push(i);
                degree[i]--;
            }
        }

        vector<int>ans;
        while(!q.empty())
        {
            ans.clear();
            int s=q.size();

            for(int i=0;i<s;i++)
            {
                int front=q.front();
                q.pop();
                ans.push_back(front);
                 
                 for(auto ad :adjacencyList[front])
                 {
                    degree[ad]--;
                    if(degree[ad]==1)
                    {
                        q.push(ad);
                    }
                 }

  


            }

        }

        return ans;
        
    }
};
class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end(),greater<int>()); //sort in decreasing order
       
        int j=0;
        int ans=0;
        // 1 processor 4 task karega

        for (int i = 0; i < processorTime.size(); i++) 
        {        ans=max(ans,tasks[j]+processorTime[i]);
        j=j+4;

        }

    return ans;
    }
};

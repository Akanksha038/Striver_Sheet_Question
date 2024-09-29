class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadan's algorithm
        //currsum=0, maxSum=INT_MIN
        //for(0->n) =>currsum+=nums[i]
        //maxSum=max(csum,maxsum)  ///we write if condition below because it solve edge case when all element is negative
        //if(csum<0) cs=0;  
        
        
        int currSum=0;
        int MaxSum=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        currSum+=nums[i];
        MaxSum=max(MaxSum,currSum);
        
        if(currSum<0){
            currSum=0;
        }
        
    }
        return MaxSum;
    }
};
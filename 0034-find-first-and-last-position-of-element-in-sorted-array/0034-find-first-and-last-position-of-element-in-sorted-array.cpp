class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int middle;
        while(l<=h)
        {
            middle=(l+h)/2;
                
            if(nums[middle]==target)
                
            {
                int st=middle;
                int end=middle;
                   while(st>0 && nums[st-1]==nums[middle])
                  {  
                    st--;
                  }
                  while(end<nums.size()-1 && nums[end+1]==nums[middle])
                  {
                    end++;
                  }
                    return {st,end};
            }
                
           
                
            
            
            else if(nums[middle]<target)
            {
                l=middle+1;
                
            }
            else
            {
                h=middle-1;
            }
        }
        return {-1,-1};
        
    }
};
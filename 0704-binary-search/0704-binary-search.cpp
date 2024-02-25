class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        
        int size=nums.size();
        int l=0;
        int h=size-1;
        int middle ;
        
        while(l<=h)
        {
                    middle=(l+h)/2;

            if(target==nums[middle])
            {
                return middle;
            }
            
            else if(nums[middle]<target){
                l=middle+1;
                
            }
            else
            {
                h=middle-1;
            }
        }
        
        return -1;
        
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t)
    {
    vector<int>ans;
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]>t){ h=mid-1;}
            
            else if(nums[mid]<t){l=mid+1; }
            
            else
            {
                //first occurence
                int first=mid;
                int last=mid;
                while(first>0 && nums[first]==nums[first-1]) { first--;}
                while(last<nums.size()-1 && nums[last]==nums[last+1]){ last++;} 
                return {first,last};
            }
        }
    
        
        return {-1,-1};
    
        
        
        
    }
};
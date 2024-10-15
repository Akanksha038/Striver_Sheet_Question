class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        set<int>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i])!=st.end())
            {
                ans.push_back(nums[i]);
                if(ans.size()==2)
            {
                break;
            }
                
            }
            
            st.insert(nums[i]);
            
            
        }
        
        return ans;
        
    }
};
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        
        for(auto it:mp)
        {
            if(it.second >1)
            {
                arr.push_back(it.first);
            }
        }
        
        return arr;
        
    }
};
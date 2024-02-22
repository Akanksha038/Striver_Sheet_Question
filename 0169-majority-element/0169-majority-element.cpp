// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         unordered_map<int,int>m;
//         for(int i=0;i<m.size();i++)
//         {
            
//             m[nums[i]]++;
//         }
        
        
//         for ( auto it:m)
//         {
//             if(it.second>(nums.size()/2))
//             {
//                return it.first;
//             }
            
//         }
        
        
//         return -1;
        
//     }
// };




class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] > n / 2) {
                return nums[i];
            }
        }

        return nums[0];
        
    }
};
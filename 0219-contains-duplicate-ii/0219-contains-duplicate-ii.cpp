class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int ,int>m;
        for(int i=0;i<nums.size();i++){
            //we check ki kya key me koi value pehle se exist kar rahi hai ya nahi by using count 
            
//             if(m.count(nums[i]))
//             {
//                 //to ham difference find kar lenge is it equal to k or not
//                 if(i-m[nums[i]]<=k)
//                 {
//                     return true;
//                 }
//             }
            
            
            
             
            if(m.find(nums[i])!=m.end() && abs(i-m[nums[i]])<=k)
            {
                
               
                    return true;
                
            }
            
            
            //update
            m[nums[i]]=i;
            
            
            
        }
        return false;
    }
};


// apply this by find rather than count 
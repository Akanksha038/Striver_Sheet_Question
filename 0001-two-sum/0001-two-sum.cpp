// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
// int prev,next;

//         for(int i=0;i<nums.size();i++)
//         {
//              for(int j=i+1;j<nums.size();j++){

             
//                 if(nums[i]+nums[j]==target)
//                 {
//                     prev=i;
//                     next=j;
//                     break;
//                 }
//              }
//         }
//         return {prev,next};
        
        
//     }
// };


// Better Solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
int prev,next;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            int wefind=target-curr;
            

            if(mp.find(wefind)!=mp.end()){
                return {i,mp[wefind]};
               }
                mp[curr]=i;
                 }
                 return {-1,-1};
    }
};
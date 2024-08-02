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

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
// int prev,next;
//         map<int,int>mp;
//         for(int i=0;i<nums.size();i++){
//             int curr=nums[i];
//             int wefind=target-curr;
            

//             if(mp.find(wefind)!=mp.end()){
//                 return {i,mp[wefind]};
//                }
//                 mp[curr]=i;
//                  }
//                  return {-1,-1};
//     }
// };



//without using hasp

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a vector of pairs to store both value and original index
        vector<pair<int, int>> num_with_index;

        for (int i = 0; i < nums.size(); ++i) {
            num_with_index.push_back({nums[i], i});
        }

        // Sort the vector based on the values
        sort(num_with_index.begin(), num_with_index.end());

        int i = 0, j = num_with_index.size() - 1;

        while (i < j) {
            int sum = num_with_index[i].first + num_with_index[j].first;
            if (sum == target) {
                return {num_with_index[i].second, num_with_index[j].second};
            } else if (sum < target) {
                ++i;
            } else {
                --j;
            }
        }

        // Return an empty vector if no solution is found
        return {};
    }
};

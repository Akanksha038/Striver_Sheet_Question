// class Solution
//  {
// public:
 
//     bool linearSearch(vector<int>&a, int num) {
//     int n = a.size(); //size of array
//     for (int i = 0; i < n; i++) {
//         if (a[i] == num)
//             return true;
//     }
//     return false;
// }
// int longestConsecutive(vector<int>& nums)
//  {
//     int n =nums.size(); //size of array
//     int longest = 1;

//     if(n==0){
//         return 0;
//     }
//     //pick a element and search for its
//     //consecutive numbers:
//     for (int i = 0; i < n; i++) {
//         int x = nums[i];
//         int count = 1;
//         //search for consecutive numbers
//         //using linear search:
//         while (linearSearch(nums, x + 1) == true) {
//             x += 1;
//             count += 1;
//         }

//         longest = max(longest, count);
//     }
//     return longest;
// }
// };















class Solution
 {
public:
 
int longestConsecutive(vector<int>& nums)
 {
   if(nums.size()==0)return 0;
    
    sort(nums.begin(), nums.end());
    int n=nums.size();
    int last_number=INT_MIN;
    int count=0;
    int longest=1;
    for(int i=0;i<n;i++){
        if(nums[i]-1==last_number)
        {
            count+=1;
            last_number=nums[i];
        }
        
        else if(last_number!=nums[i]){
            count=1;
            last_number=nums[i];
            
        }
        
        longest=max(longest,count);
        
    }
    
    return longest;
}
};


class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int h = nums.size();

    while (l < h) {
      const int middle = (l + h) / 2;
      if (nums[middle] == target)
        return middle;
      if (nums[middle] < target)
        l = middle + 1;
      else
        h = middle;
    }

    return l;
  }
};
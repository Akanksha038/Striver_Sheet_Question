class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int j=0;
        while(i<n)
        {
            if(nums[i]!=val)
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;

            }

            else{
                i++;

            }
        }
        return j;
        
    }
};
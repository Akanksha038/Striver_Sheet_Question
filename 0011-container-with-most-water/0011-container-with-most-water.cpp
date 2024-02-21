class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();

        int i=0,j=len-1;
        int ans=0;

         while(i<j){
             int heights=min(height[i],height[j]);
            int  width=j-i;
             int area=heights*width;
             if(height[i]<height[j]){
                 i++;
             }
             else j--;
        
     ans=max(ans,area);
         }
         return ans;

        
    }
};
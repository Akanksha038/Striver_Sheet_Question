class Solution {
public:
      
    long long SumTotalHr(vector<int>& piles, int hourly)
    {
        long long totalHr=0;
        for(int i=0;i<piles.size();i++)
        {
            
            totalHr += ceil((double)piles[i] / (double)hourly);
        }
        return totalHr;
    }
    
    






    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1;
        int ans;
       
        int max=*max_element(piles.begin(),piles.end());
         int u=max;
        while(l<=u)
        {
            
            int mid=(l+u)/2;
            long long totalHr=SumTotalHr(piles,mid);
            if(totalHr<=h)
            {
                ans=mid;
                u=mid-1;
            }
            
            else
            {
                l=mid+1;
            }
        }
        
       
       return ans;
    } 
};
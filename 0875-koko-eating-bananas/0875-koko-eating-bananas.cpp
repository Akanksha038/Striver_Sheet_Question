class Solution {
public:
    
    long long  TotalHr(vector<int>& piles,int hourly)
    {
           long long totalHr=0;
        for(int i=0;i<piles.size();i++)
        {
            

            double hoursNeeded=(static_cast<double>(piles[i]) / hourly);
        //    totalHr += ceil((double)piles[i] / (double)hourly);
                //    (OR)
        //   totalHr+= ceil(piles[i] / static_cast<double>(hourly));
        totalHr += ceil(hoursNeeded);

        
             //   hamne esse  static_cast<double>(hourly))  hourly ko double me convert kar liya hai
             //   ya phir ham (piles[i] / hourly) eski value nikal ke double me kar le to ye bhi sahi hoga
        }
        return totalHr;
        
    }


    
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1,ans;//because k is from 1 to 11
        int high=*max_element(piles.begin(),piles.end());
        while(l<=high){
            int mid=(l+high)/2; //middle act as a k
            long long totalHr=TotalHr(piles,mid);
            if(totalHr<=h)
            {
                ans=mid;
                high=mid-1;
                
            }

            else
            {
                l=mid+1;
            }
        }
        
         // piles = [3,6,7,11], h = 8
        
        
       
       return ans; 
    } 
};
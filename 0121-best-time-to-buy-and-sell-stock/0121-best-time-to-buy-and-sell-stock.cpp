// class Solution {  //O(N^2)
// public:
//     int maxProfit(vector<int>& prices) 
//     {
            
//             int max_Profit=0;
//             for(int i=0;i<prices.size();i++)
//             {
                    
//                     int buying_Price=prices[i];
                    
//                     for(int j=i+1;j<prices.size();j++)
//                     {
                            
//                             int selling_Price=prices[j];
                            
//                            int  profit=(selling_Price-buying_Price);
                            
//                              max_Profit= max(max_Profit,profit);
                            
//                     }
//             }
            
//             return max_Profit;
        
//     }
// };





class Solution {  //O(N)
public:
    int maxProfit(vector<int>& prices) 
    {
            
            int max_Profit=0;
            int mini=prices[0];
            
            
            for(int i=0;i<prices.size();i++)
            {
                    
                    
                    int cost=prices[i]-mini;
                    
                     max_Profit=max(max_Profit,cost);
                    
                    mini=min(mini,prices[i]);
                    
                    
                    
            }
            
            return max_Profit;
        
    }
};
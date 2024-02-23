class Solution 
{
public:
    
    int minBitFlips(int start, int goal) {
        int diff = start ^ goal;
      
       
        int flipCount = 0;
      

        while (diff) {
            
            flipCount += diff & 1;
            diff >>= 1;
        }
        return flipCount;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0){
            return false;
        }
        long long digit=1;
        while(digit<=n)
        {
            
            if(digit==n)
            {
                return true;
            }
            digit=digit*2;
        }
        
        return false;
        
    }
};
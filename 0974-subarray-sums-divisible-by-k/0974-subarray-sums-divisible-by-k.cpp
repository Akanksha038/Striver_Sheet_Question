class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        unordered_map<int,int>mp;
        int sum=0;
        //initially we store the remainder and count of this remainder
        //sum=0;
        //rem=sum%k;  =>0/k=0 and its count will be 1
        
        // mp[sum]=count
        
        mp[0]=1;
        int result=0;
        for(int i=0;i<n;i++){
            
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
                
            }
            
            if(mp.find(rem)!=mp.end()){
                result+=mp[rem];
                
            }
            
            mp[rem]++;
        }
        
        return result;
        
    }
};
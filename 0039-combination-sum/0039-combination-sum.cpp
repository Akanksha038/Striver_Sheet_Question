// class Solution {
// public:
    
//     void solve(int idx, vector<int>&candidates, vector<vector<int>>&ans, vector<int>s, int target){
        
//         //base case
//         if(target==0 ||idx==candidates.size() ) 
//         {
//             if(target==0 )  ans.push_back(s);
//             return ;
//         }
        
        
//         //1st element ko pick  kiya
//         solve(idx+1,candidates,ans,s,target);
        
//         //1st element ko pick kiya 
//         //check kahi jo element ham lene wale hai kahi wo target se bada to nahi hai 
//         if(candidates[idx]<=target){
//             s.push_back(candidates[idx]);
            
//             //target ko update karna mat bulna  ==> (target-candidates[idx])
//             solve(idx,candidates,ans,s,(target-candidates[idx]));
            
//         }
        
//     }
    
    
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target)
//     {
//         vector<vector<int>>ans;
//         vector<int>s; //CURRENT VECTOR
//         int idx=0;
//         solve(idx,candidates,ans,s,target);
       
//     return ans;    
//     }
// };







// 2ND METHOD ==>esme backtrack bhi karte chalege so take current vector as a reference


// class Solution {
// public:
    
//     void solve(int idx, vector<int>&candidates, vector<vector<int>>&ans, vector<int>&s, int target){
        
//         //base case
//         if(target==0 ||idx==candidates.size() ) 
//         {
//             if(target==0 )  ans.push_back(s);
            
            
//             return ;
//         }
        
        
//         //1st element ko pick  kiya
//         solve(idx+1,candidates,ans,s,target);
        
        
//         //1st element ko pick kiya 
//         //check kahi jo element ham lene wale hai kahi wo target se bada to nahi hai 
//         if(candidates[idx]<=target){
//             s.push_back(candidates[idx]);
            
//             //target ko update karna mat bulna  ==> (target-candidates[idx])
//             solve(idx,candidates,ans,s,(target-candidates[idx]));
//             s.pop_back();
//         }
        
//     }
    
    
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target)
//     {
//         vector<vector<int>>ans;
//         vector<int>s; //CURRENT VECTOR
//         int idx=0;
//         solve(idx,candidates,ans,s,target);
       
//     return ans;    
//     }
// };




//backtracking by using for loop




class Solution {
public:
    
    void solve(int idx, vector<int>&candidates, vector<vector<int>>&ans, vector<int>&s, int target){
        
        //base case
        if(target==0  ) 
        {
            ans.push_back(s);
            return ;
        }
        
        if(target<0)
        {
            return;
        }
        
        
        // //1st element ko pick  kiya
        // solve(idx+1,candidates,ans,s,target);
        
        for(int i=idx;i<candidates.size();i++)
        {
            
            //pehle 1st element ko push kar liya s me
            s.push_back(candidates[i]);
            
            //call same fn for taking same index value 
            solve(i,candidates,ans,s,(target-candidates[i]));
            
            s.pop_back();
        }
        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>>ans;
        vector<int>s; //CURRENT VECTOR
        int idx=0;
        solve(idx,candidates,ans,s,target);
       
    return ans;    
    }
};


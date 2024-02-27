
// 1=> it give memory limit exceed

// class Solution {
// public:
    
//     void solve(int idx, vector<int>&candidates, vector<vector<int>>&ans, vector<int>&s, int target){
        
//         //base case
//         if(target==0  ) 
//         {
//             ans.push_back(s);
//             return ;
//         }
        
//         if(target<0)
//         {
//             return;
//         }
        

        
//         for(int i=idx;i<candidates.size();i++)
//         {
            
//             //pehle 1st element ko push kar liya s me
//             s.push_back(candidates[i]);
            
//             //call same fn for taking same index value 
//             solve(i+1,candidates,ans,s,(target-candidates[i]));
            
//             s.pop_back();
//         }
        
        
//     }
    
    
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
//     {
//         sort(candidates.begin(),candidates.end());
//         vector<vector<int>>ans;
//         vector<int>s; //CURRENT VECTOR
//         int idx=0;
//         solve(idx,candidates,ans,s,target);
        
//         set<vector<int>>st;
//         for(auto e:ans){
//             st.insert(e);
//         }
        
//         ans.clear();
        
//         for(auto e:st){
//             ans.push_back(e);
//         }
       
//     return ans;    
//     }
// };



// ==>2nd approach




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
        

        
        for(int i=idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            
            //pehle 1st element ko push kar liya s me
            s.push_back(candidates[i]);
            
            //call same fn for taking same index value 
            solve(i+1,candidates,ans,s,(target-candidates[i]));
            
            s.pop_back();
        }
        
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>s; //CURRENT VECTOR
        int idx=0;
        solve(idx,candidates,ans,s,target);
        
        set<vector<int>>st;
        for(auto e:ans){
            st.insert(e);
        }
        
        ans.clear();
        
        for(auto e:st){
            ans.push_back(e);
        }
       
    return ans;    
    }
};


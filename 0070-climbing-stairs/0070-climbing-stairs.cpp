
// 1=> BY RECURSION  esme Time Limit Exceeded karge so it resolve by dp by memoisation
// class Solution 
// {
// public:
    
//     int solve(int n)
//     {  
//          if(n==0|| n==1)  return 1;
        
//          return solve(n-1)+solve(n-2);
//     }

    
    
//     int climbStairs(int n) 
//     {
//         return solve(n);
//     }
// };






// // // 2 => BY dp + memorization

// class Solution {
// public:
    
    
// int solve(int n,vector<int>dp)
// {

//          if(n<0) return 0;
//          if(n==0|| n==1)  return 1;
      
//          if(dp[n]!=-1)
//          {
//            return dp[n];
//          }
    
//         return dp[n]= solve(n-1,dp)+solve(n-2,dp);

// }

    
// int climbStairs(int n) {
    
//     // DP WALA  vector yahi likhna hai 
//     vector<int>dp(n+1,-1);
//     return solve(n,dp);
//     }
// };





// // 2 => BY dp +tabulation

class Solution {
public:
    
    
int solve(int n,vector<int>dp)
{

         if(n<0) return 0;
         if(n==0|| n==1)  return 1;
    
    int one=1;
    int two=1;
    int current=1;
      
        for(int i=2;i<=n;i++)
        {   
            current=one+two;
            
            two=one;
            one=current;
            
            
            
        }
    
        // return dp[n]= solve(n-1,dp)+solve(n-2,dp);
return current;
}

    
int climbStairs(int n) {
    
    // DP WALA  vector yahi likhna hai 
    vector<int>dp(n+1,-1);
    return solve(n,dp);
    }
};
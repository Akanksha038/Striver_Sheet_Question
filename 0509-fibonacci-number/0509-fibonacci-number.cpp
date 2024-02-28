// class Solution {
// public:
    
    
//     int solve(int n){
//         vector<int>dp(n+1,-1);
//         if(n<2){
//             return n;
//         }
        
//         if(dp[n]!=-1) return dp[n];
//         dp[n]=solve(n-1)+solve(n-2);
//         return dp[n];
//     }
    
//     int fib(int n)
//     {
//         return solve(n);
        
//     }
// };




#include <vector>

class Solution {
public:
    int solve(int n, std::vector<int>& dp) {
        if (n < 2) {
            return n;
        }
        
        if (dp[n] != -1) {
            return dp[n];
        }
        
        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
        return dp[n];
    }
    
    int fib(int n) {
        std::vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};

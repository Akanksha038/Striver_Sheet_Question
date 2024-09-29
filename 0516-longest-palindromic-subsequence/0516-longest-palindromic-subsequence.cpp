class Solution {
public:

    int solve(string &s ,string  &r, int i,int j ,vector<vector<int>>&dp){
        
        int ans;
        if(i==s.length()) return 0;
        if(j==r.length()) return 0;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(s[i]==r[j])
        {
            ans=1+solve(s,r,i+1,j+1,dp);

        }

        else{
            ans=max(solve(s,r,i+1,j,dp),solve(s,r,i,j+1,dp));
        }
           


           return dp[i][j]= ans;


    }
     


    int longestPalindromeSubseq(string s) {

        int rl=s.length();

        string revstr=s;
         int cl=revstr.length();
       
        reverse(revstr.begin(),revstr.end());

          vector<vector<int>>dp(rl,vector<int>(cl,-1));

        int ans=solve(s,revstr,0,0,dp);
        return ans;

        
    }
};
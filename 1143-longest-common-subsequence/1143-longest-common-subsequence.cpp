class Solution {
public:

int solve(string &a, string &b, int i,int j, vector<vector<int>>&dp){

          int ans;


    //base case 
    if(i==a.length()) return 0;
    if(j==b.length()) return 0;

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    //recursive call

    if(a[i]==b[j]){
        ans=1+solve(a,b,i+1,j+1,dp);

    }

    else{
        ans=max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
    }


    return dp[i][j]= ans;
}
    int longestCommonSubsequence(string text1, string text2) {

        //2 variables changes so we make 2d dp array

        int rowLength=text1.length();
        int colLength=text2.length();

        vector<vector<int>>dp(rowLength,vector<int>(colLength,-1));

        return solve(text1,text2,0,0,dp);
        
    }
};
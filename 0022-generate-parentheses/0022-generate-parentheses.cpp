// class Solution 
// {
// public:

//     vector<string> generateParenthesis1(int n, int close){
        
//         vector<string>ans;
//          if(n==0) return ;
//          ans.push_back("(")+generateParenthesis1(int n-1,close+1);
//          ans.push_back(")")+generateParenthesis1(int n,close-1);
//          return ans;
//          }

//     vector<string> generateParenthesis(int n){

//      string para=generateParenthesis1(n,0);
//      return para;
         

        
//     }
// };





class Solution {
public:

    void generateParenthesis1(int open, int close, string current, vector<string>& result) {
        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }
        
        if (open > 0) {
            // generateParenthesis1( '('+ n - 1, close + 1, current + '(', result);

            generateParenthesis1(open - 1, close + 1, current + '(', result);
        }
        
        if (close > 0) {
            generateParenthesis1(open, close - 1, current + ')', result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParenthesis1(n, 0, "", result);
        return result;
    }
};

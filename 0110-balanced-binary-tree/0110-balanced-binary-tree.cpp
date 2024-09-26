/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
        
        int find(TreeNode* root){
                
                if(root==NULL){
                        return 0;
                }
                
                int lyt=find(root->left);
                 int ryt=find(root->right);
                int ans=max(lyt,ryt)+1;
                return ans;
                
                
                
                
        }
public:
    bool isBalanced(TreeNode* root) {
            
            if(root==NULL){
                    return true;
            }
            
            //
            int LH=find(root->left);
            int Rh=find(root->right);
            if(abs(LH-Rh)>1) return false;
            bool lft=isBalanced(root->left);
            bool ryt=isBalanced(root->right);
            
            if(!lft || !ryt){
                    return false;
            }
            
            return true;
            
        
    }
};
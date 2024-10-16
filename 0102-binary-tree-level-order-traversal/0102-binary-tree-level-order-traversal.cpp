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
        
       void levelOrderTraversal(TreeNode* root,vector<vector<int>>&ans){
               
               if(root==NULL){
                       return;
               }
               
               
               queue<TreeNode*>q;
               
               q.push(root);
            
               
               
               while(!q.empty()){
                       
                       int qSize=q.size();
                       vector<int>levelElement;
                       for(int i=0;i<qSize;i++)
                       {
                               
                               TreeNode* temp=q.front();
                               q.pop();
                               
                               if(temp->left) q.push(temp->left);
                               if(temp->right) q.push(temp->right);
                               
                               levelElement.push_back(temp->val);
                               
                               
                               
                               
                       }
                       
                       ans.push_back(levelElement);
                       
                       
               }
       }
        
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
            vector<vector<int>>ans;
            levelOrderTraversal(root,ans);
            return ans;
            
        
    }
};
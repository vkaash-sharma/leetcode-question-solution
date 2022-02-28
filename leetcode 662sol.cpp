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
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        if(root == NULL){
            return 0;
            
        }
        int ans = 0;
        
        queue<pair<int , TreeNode*>>q;
        q.push({1 , root});
        
        while(!q.empty()){
            
           int n = q.size();
           int start = 0;
           int end = 0 ; 
           int num = q.front().first;
            
           for(int i =  1 ; i<=n ; i++){
               
               auto p = q.front();
               q.pop();
               TreeNode* curr = p.second;
               
               int index = p.first;
               index = index - num;
               if (curr->left!=NULL){
                   q.push({(long long) 2 * index+1 , curr->left});
               }
               if(curr->right!=NULL){
                   q.push({(long long) 2 * index+2 , curr->right});
               }
               
               if(i==1){
                   start = index;
               }
               if(i==n){
                   end = index;
               }
               
           }
            ans =max(ans , end -start+1);
            
        }
        return ans;
    }
};

// please watch the striver video for more clarifications so that the thinks is more clear

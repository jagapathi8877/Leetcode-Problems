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
    
    int height(TreeNode *root)
    {
        if(!root) return 0;
        return max(height(root->left) , height(root->right)) + 1;
    }
    void dfs(TreeNode*root , int row , int low , int high ,  vector<vector<string>>&ans)
    {
        if(!root || low > high) return;
        int mid = (low+high)/2 ;
        ans[row][mid] = to_string(root->val) ;
        dfs(root->left , row+1 , low , mid - 1 , ans) ;
        dfs(root->right , row+1 , mid+1 , high , ans) ;
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int h = height(root) ;
        int b = pow(2 , h) - 1 ;
        vector<vector<string>>ans( h , vector<string>(b , "")) ;
        dfs( root , 0 , 0 , b-1 , ans) ;
        return ans ;
    }
};
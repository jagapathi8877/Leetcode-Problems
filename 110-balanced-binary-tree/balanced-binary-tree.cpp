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
        if(!root) return 0 ;
        return 1 + max(height(root->left) , height(root->right));
    }
    int flag = 1 , res = 1 ;
    void in(TreeNode *root)
    {
        if(!root) return ;
        int diff = abs( height(root->left) - height(root->right));
        if(diff > 1 ) flag  = 0;
        if(flag == 0 ) res = 0 ;
        in(root->left);
        in(root->right) ;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return 1 ;
        in(root);
        return res == 1 ;
    }
};
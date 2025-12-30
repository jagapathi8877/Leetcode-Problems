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
    int ans = 0 ;
    void in(TreeNode *root , int maxval , int minval)
    {
        if(!root) return ; 
        int diff = max(abs(minval - root->val) , abs(maxval - root->val)) ;
        ans = max(ans ,diff) ;
        maxval = max(root->val , maxval) ;
        minval = min(root->val , minval);
        in(root->left , maxval , minval) ;
        in(root->right , maxval , minval);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        in(root , root->val , root->val) ;
        return ans ;
    }
};
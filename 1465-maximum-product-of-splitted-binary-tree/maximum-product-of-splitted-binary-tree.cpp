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
    long long sum = 0 , ans = 0 ;
    void in(TreeNode *root)
    {
        if(!root) return ;
        sum += root->val ;
        in(root->left);
        in(root->right); 
    }
    long long pre(TreeNode *root)
    {
        if(!root) return 0 ;
        long long left = pre(root->left) , right = pre(root->right);
        long long res = root->val + left + right;
        ans = max(ans , res * (sum - res) ) ;
        return res ;
    }
    int maxProduct(TreeNode* root) {
        int MOD = 1e9 + 7 ;
        in(root);
        pre(root);
        return ans%(MOD) ;
    }
};
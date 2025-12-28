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
    void in(TreeNode *left , TreeNode *right , int cnt)
    {
        if(!left || !right ) return ;
        if(cnt % 2 == 0) swap(left->val , right->val);
        in(left->left , right->right , cnt+1);
        in(left->right, right->left , cnt+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        in(root->left  , root->right , 0);
        return root ;
    }
};
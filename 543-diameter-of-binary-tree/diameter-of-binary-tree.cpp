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
    int in(TreeNode*root)
    {
        if(!root) return 0 ;
        int l = in(root->left) , r = in(root->right) ;
        int d = l + r ;
        ans = max(ans ,d);
        return max(l,r) + 1 ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int x = in(root);
        return ans;
    }
};
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
    int min = INT_MAX ;
    void in(TreeNode*root , int cnt )
    {
        if(!root) return ;
        if(!root->left && !root->right)
        {
            if(cnt < min) min =cnt;
        }
        in(root->left , cnt + 1);
        in(root->right , cnt + 1);
    }
    int minDepth(TreeNode* root) {
        if(!root) return NULL ;
        in(root , 1) ;
        return min ;
    }
};
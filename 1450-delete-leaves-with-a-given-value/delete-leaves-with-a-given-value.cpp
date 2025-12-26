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
    void in(TreeNode *&root , int target) 
    {   
        if(!root) return ;
        in(root->left , target);
        in(root->right , target);
        if(!root->left && !root->right && root->val == target ) root = NULL;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        in(root, target);
        return root;
    }
};
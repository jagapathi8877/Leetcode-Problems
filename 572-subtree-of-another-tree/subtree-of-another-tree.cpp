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
    int check(TreeNode *root , TreeNode *subRoot)
    {
        if(!root && !subRoot) return 1;
        if(!root || !subRoot) return 0;
        if(root->val != subRoot->val) return 0 ;
        return check(root->left , subRoot->left) && check(root->right , subRoot->right) ;
    }
    int x = 0 ;
    void in(TreeNode *root , TreeNode *subRoot)
    {
        if(!root || x ) return ;
        if(root->val == subRoot->val) 
        {
            x = check(root , subRoot);
        }
        in(root->left , subRoot);
        in(root->right , subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        in(root , subRoot);
        return x ;
    }
};
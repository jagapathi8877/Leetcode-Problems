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
    int in(TreeNode *a, TreeNode *b)
    {
        if(a == NULL && b == NULL) return 1 ;
        if(a== NULL || b == NULL) return 0 ;
        if(a->val != b->val) return 0 ;
        return in(a->left , b->right) && in(a->right, b->left) ;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1 ;
        return in(root->left , root->right) ;
    }
};
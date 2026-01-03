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
    TreeNode* insert(TreeNode *&root , int val)
    {
        if(!root) return new TreeNode(val);
        if(val < root->val) root->left = insert(root->left , val);
        else if(val > root->val) root->right = insert(root->right , val) ;
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& arr) {
        if(arr.size() == 0) return NULL;
        TreeNode *root = NULL;
        for(auto i : arr) 
        {
            root = insert(root, i);
        }
        return root;
    }
};
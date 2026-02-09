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
    vector<int>arr;
    void in(TreeNode *root)
    {
        if(!root) return ;
        in(root->left);
        arr.push_back(root->val);
        in(root->right);
    }
    TreeNode *ans(int l , int r)
    {
        if(l > r) return NULL;
        int mid = (l+r) >> 1 ;
        TreeNode *node = new TreeNode(arr[mid]);
        node->left = ans(l , mid - 1);
        node->right = ans(mid + 1 , r);
        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        in(root);
        return ans(0 , arr.size() - 1);
    }
};
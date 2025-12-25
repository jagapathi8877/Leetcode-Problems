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
    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX;
        in(root);
        for(int i  = 1 ; i < arr.size() ; i++) mini = min(arr[i] - arr[i-1] , mini)  ;
        return mini;
    }
};
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
    vector<vector<int>>ans ;
    void in(TreeNode *root , int targetSum, vector<int>arr , int sum)
    {
        if(!root) return ;
        sum += root->val ;
        arr.push_back(root->val) ;
        if(!root->left && !root->right && sum == targetSum) ans.push_back(arr);
        in(root->left , targetSum ,arr,sum);
        in(root->right , targetSum , arr , sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0 ;
        vector<int>arr ;
        in(root , targetSum , arr , sum);
        return ans ;
    }
};
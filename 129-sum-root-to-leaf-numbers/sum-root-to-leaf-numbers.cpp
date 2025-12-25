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
    vector<int>arr ;
    void in(TreeNode *root , int num)
    {
        if(!root) return ;
        num = num*10 + root->val ;
        if(!root->left && !root->right) arr.push_back(num);
        in(root->left , num);
        in(root->right , num);
    }
    int sumNumbers(TreeNode* root) {
        in(root , 0);
        int sum = 0 ;
        for(int i : arr) sum += i;
        return sum;
    }
};
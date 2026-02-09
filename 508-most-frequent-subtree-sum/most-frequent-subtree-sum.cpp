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
    unordered_map<int,int>mp ;
    int tot(TreeNode *root , int sum)
    {
        if(!root) return 0 ;
        int left = tot(root->left , 0);
        int right = tot(root->right , 0);
        return left + right + root->val;
    }
    void pre(TreeNode *root)
    {
        if(!root) return ;
        int sum = tot(root, 0);
        mp[sum]++;
        pre(root->left);
        pre(root->right);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>ans;
        pre(root);
        int mx = INT_MIN;
        for(auto i : mp) if(i.second > mx) mx = i.second;
        for(auto i : mp)
        {
            if(i.second == mx) ans.push_back(i.first);
        }
        return ans;
    }
};
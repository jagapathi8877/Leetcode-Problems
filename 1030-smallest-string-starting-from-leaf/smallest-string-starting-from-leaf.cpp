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
    vector<string>ans ;
    void in(TreeNode *root , string s)
    {
        if(!root) return ;
        s+= (char)('a' + root->val); 
        if(!root->left && !root->right)
        {
            reverse(s.begin() , s.end());
            ans.push_back(s);
        }
        in(root->left , s);
        in(root->right , s);
    }
    string smallestFromLeaf(TreeNode* root) {
        if(!root) return "";
        in(root , "");
        sort(ans.begin() ,ans.end());
        return ans[0];
    }
};
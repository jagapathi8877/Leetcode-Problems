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
    long long ans  = 0  ;
    void in(TreeNode *root , string s)
    {
        s += (char)(root->val + '0') ;
        if(root->left == NULL && root->right == NULL) 
        {
            ans += stoi(s , nullptr , 2) ;
            return ;
        }
        if(root->left) in(root->left ,s );
        if(root->right) in(root->right , s);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        string s = "" ;
        in(root , s);
        return ans ;
    }
};
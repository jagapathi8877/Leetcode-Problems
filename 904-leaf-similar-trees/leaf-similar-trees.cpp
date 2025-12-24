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
    
    void in(TreeNode*root , vector<int>& a)
    {
        if(!root) return ;
        if(root->left == NULL && root->right == NULL) a.push_back(root->val);
        in(root->left  , a);
        in(root->right , a);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a, b ;
        in(root1 , a);
        in(root2,b);
        if(a.size()!=b.size()) return 0 ;
        for(int i = 0 ;i  < a.size() ; i++) if(a[i]!=b[i]) return 0 ;
        return 1 ;
    }
};
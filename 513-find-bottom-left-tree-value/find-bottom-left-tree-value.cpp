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
    int ans = 0, maxi = INT_MIN ;
    void in(TreeNode *root , int size)
    {
        if(!root) return ;
        if(root->left == NULL && root->right == NULL) 
        {
            if(size > maxi)
            {
                maxi = size;
                ans = root->val ;
            }
        }
        in(root->left, size+1);
        in(root->right , size + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
        in(root , 0);
        return ans ;
    }
};
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
    void values(TreeNode *root , int &sum , int &cnt)
    {
        if(!root) return ;
        sum += root->val ;
        cnt++;
        values(root->left , sum , cnt);
        values(root->right , sum , cnt);
    }
    int ans = 0 ;
    void preorder(TreeNode *root)
    {
        if(!root) return ;
        int sum = 0 , cnt = 0 ;
        values(root , sum , cnt) ;
        if(cnt > 0 && sum/cnt == root->val) ans++;
        preorder(root->left);
        preorder(root->right);
     }
    int averageOfSubtree(TreeNode* root) {
        preorder(root);
        return ans ;
    }
};
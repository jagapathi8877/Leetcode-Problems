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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0 ;
        int cnt = 1 , maxi = INT_MIN;
        int level = 0;
        queue<TreeNode*>q ;
        q.push(root);
        while(!q.empty())
        {
            int sum =0 ;
            int n = q.size();
            for(int i = 0 ; i< n ; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                sum += temp->val ;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(sum > maxi)
            {
                maxi = sum;
                level = cnt;
            }
            cnt+=1;
        }
        return level ;
    }
};
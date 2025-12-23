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
    bool isEvenOddTree(TreeNode* root) {
        if(!root) return 0 ;
        queue<TreeNode*>q ;
        q.push(root);
        int cnt = 0 ;
        while(!q.empty())
        {
            int n = q.size() ;
            vector<int>res ;
            for(int i = 0 ; i < n ; i++)
            {
                TreeNode *temp = q.front() ;
                q.pop() ;
                res.push_back(temp->val) ;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right) ;
            }
           if(cnt % 2 == 0)
           {
            for(int i = 0 ; i < res.size()- 1 ; i++)
            {
                if(res[i]%2 == 0) return 0;
                if(res[i] >= res[i+1]) return 0 ;
            }
            if(res[res.size() - 1] %2 == 0) return 0 ;
           }
           if(cnt % 2== 1)
           {
                for(int i = 0 ; i < res.size() -1 ; i++)
                {
                if(res[i]%2 == 1) return 0;
                if(res[i] <= res[i+1]) return 0 ;
                }
                if(res[res.size() - 1] %2 == 1) return 0 ;
           }
           cnt++;
        }
        return 1;
    }
};
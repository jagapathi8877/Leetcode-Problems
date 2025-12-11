/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp ;
        for(int i : nums) mp[i]++;
        while(head && mp[head->val] > 0) head = head->next ;
        ListNode *temp = head ;
        while(temp && temp->next)
        {
            if(mp[temp->next->val] > 0) temp->next = temp->next->next ;
            else temp = temp->next ;
        }
        return head ;
    }
};
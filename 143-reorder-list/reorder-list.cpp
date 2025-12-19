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
    void reorderList(ListNode* head) {
        ListNode *temp = head ;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode *res = head ;
        int i = 0 , j = arr.size() - 1 ;
        while(res && res->next)
        {
            res->val = arr[i++];
            res = res->next;
            res->val = arr[j--];
            res = res->next;
        }
        if(arr.size()%2 == 1) res->val = arr[j];
    }
};
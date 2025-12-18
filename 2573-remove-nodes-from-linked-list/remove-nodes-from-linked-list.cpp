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
    ListNode *reverse(ListNode *list)
    {
        ListNode* curr = list;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev ;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode *temp = head ;
        ListNode *res = NULL ;
        int maxi = 0;
        while(temp)
        {
            if(temp->val >= maxi)
            {
                maxi = temp->val ;
                res = temp; 
            }
            else res->next = temp->next;
            temp = temp->next;
        }
        return reverse(head);
    }
};
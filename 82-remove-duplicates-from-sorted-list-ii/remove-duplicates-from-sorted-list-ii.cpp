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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode *temp = new ListNode(0);
       temp->next = head ;
       ListNode *ans = temp ;
       while(head)
       {
            if(head->next != NULL && head->val == head->next->val)
            {
                while(head->next && head->val == head->next->val) head = head->next ;
                temp->next = head->next ;
            }
            else temp = temp->next ;
            head = head->next ;
       }
       return ans->next ;
    }
};
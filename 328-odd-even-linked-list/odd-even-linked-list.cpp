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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode *temp = head ;
        ListNode *res = head->next ;
        ListNode *res1 = res ;
        while(res && res->next)
        {
            temp->next = res->next ;
            temp = temp->next;
            res->next = temp->next;
            res = res->next ;
        }
        temp->next = res1 ;
        return head ;
    }
};

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
    ListNode* partition(ListNode* head, int x) {
       ListNode *a = new ListNode(0) ;
       ListNode *b = new ListNode(0) ;
       ListNode *small = a ;
       ListNode *big = b ;
       ListNode *temp = head ;
       while(temp)
       {
        if(temp->val >= x)
        {
            big->next = temp ;
            big = big->next ;
        }
        else
        {
            small->next = temp;
            small = small->next ;
        }
        temp = temp->next;
       }
       big->next = NULL ;
       small->next = b->next ;
       return a->next ;
    }
};
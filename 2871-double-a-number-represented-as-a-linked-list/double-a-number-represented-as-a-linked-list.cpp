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
    ListNode *reverse(ListNode *head)
    {
        ListNode*curr = head ;
        ListNode *prev = NULL ;
        ListNode *next = NULL ;
        while(curr)
        {
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        
       ListNode *prev = reverse(head) ;
       ListNode *temp = prev;
       int carry = 0 , sum = 0 ; 
       while(temp)
       {    
            temp->val = temp->val * 2 + carry;
            carry = temp->val/10 ;
            temp->val%=10;
            if(temp->next == NULL && carry)
            {
                ListNode *node = new ListNode(carry) ;
                temp->next =node ;
                break ;
            }
            temp = temp->next ;  
       }
        return reverse(prev);
    }
};
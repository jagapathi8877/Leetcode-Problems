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
    ListNode* reverse(ListNode *l)
    {
        ListNode* prev = NULL;
        ListNode* curr = l;
        while(curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1) ;
        l2 = reverse(l2);
        int carry = 0 ; 
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(l1 ||  l2 || carry)
        {
            int sum = carry;

            if(l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
        }
        return reverse(dummy->next) ;
    }
};
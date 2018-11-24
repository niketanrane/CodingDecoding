/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        //ListNode *l3 = ListNode(0);
        return addTwoNumbersUtil(l1, l2, carry);
    }
    
    ListNode *addTwoNumbersUtil(ListNode *l1, ListNode *l2, int carry){
        //both nodes absent
        if(l1 == NULL && l2 == NULL){
            if(carry){
                l1 = new ListNode(carry);
            }
        }
        else if(l1 != NULL && l2 != NULL){
            //both present
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            l1->val = sum % 10;
            l1->next = addTwoNumbersUtil(l1->next, l2->next, carry);
        }
        else if(l2 == NULL){
            //l1 present, then add carry and forward as usual
            int sum = l1->val + carry;
            carry = sum / 10;
            l1->val = sum % 10;
            l1->next = addTwoNumbersUtil(l1->next, l2, carry);
        }
        else{
            //l1 is null, same procedure
            int sum = l2->val + carry;
            carry = sum / 10;
            l2->val = sum % 10;
            l2->next = addTwoNumbersUtil(l1, l2->next, carry);
            l1 = l2;
        }
        return l1;
        
    }
};
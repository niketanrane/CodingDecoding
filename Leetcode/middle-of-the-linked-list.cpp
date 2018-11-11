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
    ListNode* middleNode(ListNode* head) {
        if (head == NULL){
            return head;
        }

        struct ListNode *slow = head, *fast = head->next;
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast != NULL){
            return slow->next;
        }
        else{
            return slow;
        }
    }
};

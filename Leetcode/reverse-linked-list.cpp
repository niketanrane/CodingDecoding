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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }

        struct ListNode *prev = NULL, *cur = head, *ahead;
        while(cur != NULL){
            ahead = cur->next;
            cur->next = prev;
            prev = cur;
            cur = ahead;
        }

        return prev;
    }
};

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
    bool isPalindromeUtil(struct ListNode **head, struct ListNode *cur){
        if (cur == NULL){
            return true;
        }

        bool b = isPalindromeUtil(head, cur->next) & (cur->val == (*head)->val);
        (*head) = (*head)->next;
        return b;

    }

    bool isPalindrome(ListNode* head) {
        return isPalindromeUtil(&head, head);
    }


};

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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode *dummyHead = new ListNode(val+1);
        dummyHead->next = head;
        ListNode *ptr = dummyHead;
        while(head != NULL){
            if (head->val == val){
                ptr->next = head->next;
            }
            else{
                ptr = ptr->next;
            }
            head = head->next;
        }
        return dummyHead->next;
    }
};

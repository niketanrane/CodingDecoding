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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode *dummyhead = new ListNode(-1);
        struct ListNode *ptr = dummyhead;
        struct ListNode *temp1 = l1, *temp2 = l2;
        while(temp1 != NULL & temp2 != NULL){
            if(temp1->val < temp2->val){
                //add temp1 to main
                ptr->next = temp1;
                temp1 = temp1->next;
            }
            else{
                ptr->next = temp2;
                temp2 = temp2->next;
            }
            ptr = ptr->next;
        }

        if(temp1){
            ptr->next = temp1;
        }
        else{
            ptr->next = temp2;
        }

        /*
        while(temp1 != NULL){
            ptr->next = temp1;
            temp1 = temp1->next;
            ptr = ptr->next;
        }

        while(temp2 != NULL){
            ptr->next = temp2;
            temp2 = temp2->next;
            ptr = ptr->next;
        }
        */

        return dummyhead->next;
    }
};

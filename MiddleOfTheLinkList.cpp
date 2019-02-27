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
        ListNode* N1 = head;
        ListNode* N2 = head;
        if(head != NULL)
        {
            while(N2 != NULL && N2->next != NULL)
            {
                N2 = N2->next->next;
                N1 = N1->next;
            }
            cout<<"The middle of the Linked List is " << N1->val;
        }return N1;
    } 
};
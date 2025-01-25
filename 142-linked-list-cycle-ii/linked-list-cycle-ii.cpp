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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&& fast->next) // to detect if there exists a cycle in the list
        {
            slow=slow->next;
            fast=fast->next->next;
           if(slow==fast) break;
        }
        if(!fast || !fast->next) // when there is no cycle
        {
            return NULL;
        }
        fast=head;// to find the starting position of the cycle we reset the fast pointer to head
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};
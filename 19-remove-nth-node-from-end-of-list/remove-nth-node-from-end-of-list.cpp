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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL)
        {
            ListNode* temp=curr->next;
            curr->next = prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        ListNode* revHead=reverse(head);
        ListNode* temp=revHead;
        ListNode* prev=NULL;
        while(temp!=NULL && --n>0)
        {
            prev=temp;
            temp=temp->next;
        }
        if(prev==NULL)
        {
            revHead=temp->next;
        }
        else
        {
            prev->next=temp->next;
        }
        delete temp;
        return reverse(revHead);
        
    }
};
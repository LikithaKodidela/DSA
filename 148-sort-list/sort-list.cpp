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
private:
    ListNode* findMiddle(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge2list(ListNode* head1,ListNode* head2)
    {
        ListNode* t1=head1;
        ListNode* t2=head2;
        ListNode* dNode=new ListNode(-1);
        ListNode* temp=dNode;
        while(t1!=NULL && t2!=NULL)
        {
            if(t1->val < t2->val)
            {
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        if(t1)
        {
            temp->next=t1;
        }
        else
        {
            temp->next=t2;
        }
        return dNode->next;
    }
public:
    ListNode* sortList(ListNode* head) {
       if(head==NULL || head->next==NULL)
       {
           return head;
       }
       ListNode* middle=findMiddle(head);
       ListNode* lefthead=head;
       ListNode* righthead=middle->next;
       middle->next=NULL;
       lefthead=sortList(lefthead);
       righthead=sortList(righthead);
       return merge2list(lefthead,righthead);
    }
};
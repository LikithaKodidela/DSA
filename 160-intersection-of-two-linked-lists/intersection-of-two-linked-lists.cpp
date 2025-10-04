/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * }; 
 */
class Solution {
    ListNode* collisionPoint(ListNode* t1,ListNode* t2,int d)
    {
        while(d)
        {
            d--;
            t2=t2->next; 
        }
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
      int n1=0;
      int n2=0;
      ListNode* t1=head1;
      while(t1!=NULL)
      {
        n1++;
        t1=t1->next;
      }
      ListNode* t2=head2;
      while(t2!=NULL)
      {
        n2++;
        t2=t2->next;
      }
      if(n1 < n2)
      {
         return collisionPoint(head1,head2,n2-n1);
      }
      else
      {
        return collisionPoint(head2,head1,n1-n2);
      }
    }
};
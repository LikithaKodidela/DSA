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
public:
    bool checkPalindrome(vector<int> &nums)
    {
        int n=nums.size();
        for(int i=0;i<n/2;i++)
        {
            if(nums[i]!=nums[n-i-1])
            {
                return false;
            }
        }
        return true;
    
    }
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        return checkPalindrome(nums);
    }
};
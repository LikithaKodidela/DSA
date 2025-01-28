class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> res;
        int count1=0;
        int count2=0;
        int element1,element2;
        for(int i=0;i<nums.size();i++)
        {
            if(count1==0 && nums[i]!=element2)
            {
                element1=nums[i];
                count1++;
            }
            else if(count2==0&& nums[i]!=element1)
            {
                element2=nums[i];
                count2++;
            }
            else if(element1==nums[i])
            {
                count1++;
            }
            else if(element2==nums[i])
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int j=0;j<nums.size();j++)
        {
            if(element1==nums[j])
            {
                 count1++;
            } 
            if(element2==nums[j])
            {
                count2++;
            }
        }
        if(count1 >(nums.size()/3))
        {
            res.push_back(element1);
        }
        if(count2 >(nums.size()/3))
        {
            res.push_back(element2);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
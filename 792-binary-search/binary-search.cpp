class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin=0;
        int end=nums.size()-1;
        int res=-1;
        while(begin<=end)
        {
            int mid=(begin+end)/2;
            if(target>nums[mid])
            {
                begin=mid+1;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else{
                res=mid;
                begin=end+1;
            }
        }
        return res;
    }
};
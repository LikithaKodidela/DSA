class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left =0;
        int right=nums.size()-1;
        while(left < right)
        {
            int mid=left +(right-left)/2;
            if(nums[mid] > nums[mid+1])
            {
                right=mid; 
            }
            else
            {
                left=mid+1; // if the mid element is  less then the mid+1 element then the peak
                             // will definitely  be  after the current mid 
            }
        }
        return left;
    }
};
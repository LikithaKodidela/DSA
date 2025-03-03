class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      /*  vector<int> res,l,r;
       int  n=nums.size();
       int j=0;k=0
      for(int i=0;i<n;i++)
      {
        if(nums[i]<pivot)
        {
           l[j]=nums[i];
           j++;
        }
        else if(nums[i]>=nums[i])
        {
            r[k]=nums[i];
            k++;
        }
      }*/
         vector<int> result(nums.size(), 0);
        int left = 0, right = nums.size() - 1;
        for (int i = 0, j = nums.size() - 1; i < nums.size(); ++i, --j) {
            if (nums[i] < pivot) {
                result[left] = nums[i];
                left++;
            }
            
            if (nums[j] > pivot) {
                result[right] = nums[j];
                right--;
            }
        }
        
        while (left <= right) {
            result[left] = pivot;
            left++;
        }
        
        return result;
    }
};

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=INT_MIN;
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        for(int i=0;i<n;i++)
        {
            int product=nums[i];
            for(int j=i+1;j<n;j++)
            {
                maxproduct=max(maxproduct,product);
                product*=nums[j];  
            }
             maxproduct=max(maxproduct,product);
        }
        return maxproduct;
    }
};
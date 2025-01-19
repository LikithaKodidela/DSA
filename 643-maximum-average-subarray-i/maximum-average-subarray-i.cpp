class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double maxavg=0.0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        maxavg=static_cast<double>(sum)/k;
        for(int j=k;j<nums.size();j++)
        {
            sum+=nums[j]-nums[j-k];
            double currentavg=static_cast<double>(sum)/k;
            if(currentavg > maxavg)
            {
                maxavg=currentavg;
            }
        }
      return maxavg;   
    }
};
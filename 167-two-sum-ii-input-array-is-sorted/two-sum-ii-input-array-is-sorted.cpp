class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        int left=0;
        int right=numbers.size()-1;
        while(left < right)
        {
            int sum=numbers[left]+numbers[right];
            if(sum==target)
            {
                sol={left+1,right+1};
                return sol;
            }
            else if(sum <target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return sol;
    }

};
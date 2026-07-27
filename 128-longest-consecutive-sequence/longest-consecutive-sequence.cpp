class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        int n = nums.size();
        int max_count = 1;
        int count = 1;
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int x = it;
                int count =1;
                while(st.find(x+1)!=st.end())
                {
                    x++;
                    count++;
                }
                max_count = max(max_count,count);
            }
        }
        return max_count;
    }
};
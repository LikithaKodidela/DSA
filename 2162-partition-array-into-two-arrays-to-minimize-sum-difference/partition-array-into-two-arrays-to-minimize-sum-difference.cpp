class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int N = nums.size();
        int n = N / 2;
        int sum = accumulate(nums.begin(), nums.end(), 0);

        int res = INT_MAX;

        vector<vector<int>> left(n + 1), right(n + 1);

        for (int mask = 0; mask < (1 << n); mask++) {
            int sz = 0, l = 0, r = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sz++;
                    l += nums[i];
                    r += nums[i + n];
                }
            }

            left[sz].push_back(l);
            right[sz].push_back(r);
        }

        for (int sz = 0; sz <= n; sz++)
            sort(right[sz].begin(), right[sz].end());

        for (int sz = 0; sz <= n; sz++) {
            int rsz = n - sz;

            for (int a : left[sz]) {

                int target = sum / 2 - a;

                auto &v = right[rsz];
                auto itr = lower_bound(v.begin(), v.end(), target);

                if (itr != v.end())
                    res = min(res, abs(sum - 2 * (a + *itr)));

                if (itr != v.begin()) {
                    --itr;
                    res = min(res, abs(sum - 2 * (a + *itr)));
                }
            }
        }

        return res;
    }
};
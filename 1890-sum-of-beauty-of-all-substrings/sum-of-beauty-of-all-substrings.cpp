class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int total = 0;

        // Fix starting index
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0); // frequency of chars

            // Expand substring from i to j
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                // Find max and min frequency in current substring
                int most = INT_MIN, least = INT_MAX;
                for (int f : freq) {
                    if (f > 0) {
                        most = max(most, f);
                        least = min(least, f);
                    }
                }

                total += (most - least);
            }
        }
        return total;
    }
};

class Solution {
private:
    // returns a pair: (start_index, length)
    pair<int,int> expand_from_center(const string &s, int left, int right) {
        while (left >= 0 && right < (int)s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // left and right are now one step beyond the palindrome
        return make_pair(left + 1, right - left - 1);
    }

public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) {
            return s;
        }

        int best_start = 0;
        int best_len = 1;  // at least one char

        for (int i = 0; i < (int)s.length() - 1; i++) {
            pair<int,int> odd  = expand_from_center(s, i, i);
            pair<int,int> even = expand_from_center(s, i, i + 1);

            if (odd.second > best_len) {
                best_start = odd.first;
                best_len   = odd.second;
            }
            if (even.second > best_len) {
                best_start = even.first;
                best_len   = even.second;
            }
        }

        return s.substr(best_start, best_len);
    }
};

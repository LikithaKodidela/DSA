class Solution {
public:
    int hammingWeight(int n) {
           //return __builtin_popcount(n);
             int count = 0;
        while (n) {
            count += (n & 1);  // Check if the least significant bit is 1
            n >>= 1;            // Right shift n to process the next bit
        }
        return count;

    }
};
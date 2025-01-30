class Solution {
public:
   stack<int> st;
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long int reverse=0;
        int num=x;
        while(x > 0)
        {
           reverse= (reverse *10)+(x %10);
           x/=10;
        }
        return reverse==num;
    }
};
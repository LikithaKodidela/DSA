class Solution {
public:
    //This problem can be solved using hashset 
    // but the hashset uses a extra space for storing the all the elements
    int getnext(int num) 
    {
        int sum=0;
        while(num >0)
        {
             int digit= num%10;// gives the digit in units place
             sum+=digit*digit;
             num/=10;// gives the next digit number
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=getnext(n);
         while(fast!=1 && slow!=fast)//loop continues until '1' is detected
         {
            slow=getnext(slow); // slow pointer moves one step
            fast=getnext(getnext(fast));//fast pointer moves two steps
         }
        return fast==1;
    }
};
class Solution {
    public:
    bool isPowerOfTwo(int n) {
        if(n==0)return false;
        
        while(n>0){
            if(n==1)return true;
            if(n %2 !=0)break; // when ever the input is something that is divisible by 2 but not power of 2 
            n /=2;            // or the input is not divisible by 2 the loop will break and returns false
        }
        return false;
    }
};

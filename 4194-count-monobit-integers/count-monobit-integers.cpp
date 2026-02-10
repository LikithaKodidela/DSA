class Solution {
public:
    int countMonobit(int n) {
        int count=1;
        int k=1;
        if(n==0) return 1;
        while((1<<k)-1<=n)
        {
            count++;
            k++;
        }
        return count;
    }
};
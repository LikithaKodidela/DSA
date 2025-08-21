class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_count=0;
        for(char ch : s){
               if(ch=='(')
               {
                  count++;
                 max_count=max(count,max_count);
               }
               else if(ch==')')
               {
                 count--;
               }
        }

        return max_count;
    }
};
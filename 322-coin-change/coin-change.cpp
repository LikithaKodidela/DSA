class Solution {
public:
    int solve(int ind,int amount, vector<int>& coins, vector<vector<int>> &dp)
    {
       if(ind==0)
       {
         if(amount%coins[ind]==0) return amount/coins[ind];
         else return 1e9;
       }
        if(dp[ind][amount] !=-1) return dp[ind][amount] ;
       int notTake = solve(ind-1,amount,coins,dp);
       int take = 1e9;
       if(coins[ind]<=amount)
       {
         take = 1 + solve(ind,amount-coins[ind],coins,dp);
       }
       return dp[ind][amount] = min(take,notTake);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> prev(amount+1,0),curr(amount+1,0);

         for(int amt=0;amt<=amount;amt++)
         {
            if(amt % coins[0]==0) prev[amt]=amt/coins[0];
            else prev[amt] = 1e9;
         }
         for(int i=1;i<n;i++)
         {
            for(int amt=0;amt<=amount;amt++)
            {
                    int notTake = prev[amt];
                    int take = 1e9;
                    if(coins[i]<=amt)
                    {
                        take = 1 + curr[amt-coins[i]];
                    }
                    curr[amt] = min(take,notTake);
            }
            prev=curr;
         }
        int ans = prev[amount] ;
        return ( ans == 1e9) ? -1 : ans;
    }
};
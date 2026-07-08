class Solution {
    int solve(int ind , vector<int> &coins, int amount,vector<vector<int>> &dp)
    {
        if(ind == 0)
        {
            if(amount % coins[ind] == 0)
            {
                return amount / coins[ind] ;
            }
            else
            {
                return 1e9;
            }
        }
        if(dp[ind][amount] !=-1) return dp[ind][amount] ;

        int notTake = solve(ind-1,coins,amount,dp);
        int take = 1e9;
        if(coins[ind]<=amount)
        {
            take = 1 + solve(ind,coins,amount - coins[ind],dp);
        }
        return dp[ind][amount] = min(take,notTake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
         int n = coins.size();
         //vector<vector<int>> dp(n,vector<int> (amount + 1,0));
           vector<int> prev(amount + 1 ,0);
         for(int amt=0; amt<=amount ;amt++)
         {
            if(amt % coins[0] == 0) prev[amt] = amt / coins[0];
            else prev[amt] = 1e9; 
         }

         for(int i = 1;i<n;i++)
         {
            vector<int> curr(amount+1,0);
            for(int amt=0;amt<=amount;amt++)
            {
                  int notTake = prev[amt];
                  int take = 1e9;
                  if(coins[i]<=amt)
                  {
                    take = 1 + curr[amt - coins[i]];
                  }
                  curr[amt] = min(notTake,take);
            }
            prev = curr;
         }
         int ans = prev[amount];
         return (ans == 1e9) ? -1 : ans;
    }
};
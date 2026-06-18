class Solution {
public:
    int dp[301][5001];
    int solve(int index,vector<int>&coins,int target){ 
        if(target==0){
            return 1;
        }
        if(index==-1)return 0;
        if(dp[index][target]!=-1)return dp[index][target];
        int pick=0;
        int not_pick=0;
        if(coins[index]<=target)pick=solve(index,coins,target-coins[index]);
        not_pick=solve(index-1,coins,target);
        return dp[index][target]=pick+not_pick;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return solve(coins.size()-1,coins,amount);
    }
};
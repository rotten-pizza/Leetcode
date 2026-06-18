class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int dp[coins.size()+2][amount+1];
        // memset(dp,-1,sizeof(dp));
        for(int i=0;i<coins.size()+1;i++)dp[i][0]=0;
        for(int i=0;i<=amount;i++)dp[coins.size()][i]=1e9;
        for(int index=coins.size()-1;index>=0;index--){
            for(int target=1;target<=amount;target++){
                int pick=1e9,not_pick=1e9;
        // pick
        if(coins[index]<=target)pick=1+dp[index][target-coins[index]];
        not_pick=dp[index+1][target];
         dp[index][target]=min(pick,not_pick);
            }
        }
        int ans= dp[0][amount];
        if(ans==1e9)return -1;
        return ans;
    }

};
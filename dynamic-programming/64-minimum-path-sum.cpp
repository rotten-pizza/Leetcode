class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size()+1,vector<int>(grid[0].size()+1,1e9));
        dp[1][0]=0;
        for(int i=1;i<grid[0].size()+1;i++)dp[1][i]=dp[1][i-1]+grid[0][i-1];
        for(int i=2;i<=grid.size();i++){
            for(int j=1;j<=grid[0].size();j++){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i-1][j-1];
            }
        }
        return dp[grid.size()][grid[0].size()];
    }
};
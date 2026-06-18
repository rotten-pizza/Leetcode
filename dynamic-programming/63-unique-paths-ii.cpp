class Solution {
public:
    int solve(int x,int y,vector<vector<int>>&obstacle,int n,int m,vector<vector<int>>&dp){
        if(x==0&&y==0)return 1;
        // check if those position is checked or not
        if(dp[x][y]!=-1)return dp[x][y];
        int ans=0;
        // coming from right
        if(y-1>=0){
            if(obstacle[x][y-1]==0)ans+=solve(x,y-1,obstacle,n,m,dp);
        }
        // coming from up
        if(x-1>=0){
            if(obstacle[x-1][y]==0)ans+=solve(x-1,y,obstacle,n,m,dp);
        }
    return dp[x][y]=ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacle) {
    int n=obstacle.size(),m=obstacle[0].size();
    // edge case when obstacle is at final destination
    if(obstacle[n-1][m-1]==1)return 0;
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return solve(n-1,m-1,obstacle,n,m,dp);
    }
};
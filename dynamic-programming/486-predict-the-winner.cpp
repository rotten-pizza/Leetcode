class Solution {
public:
    int solve(vector<int>&nums,int turn,int i,int j,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(turn==1){
            return dp[i][j]=max(nums[i]+solve(nums,0,i+1,j,dp),nums[j]+solve(nums,0,i,j-1,dp));
        }
        else return dp[i][j]=min(solve(nums,1,i+1,j,dp),solve(nums,1,i,j-1,dp));
    }
    bool predictTheWinner(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        long long  total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        long long ans=solve(nums,1,0,nums.size()-1,dp);
        total-=ans;
    return (ans>=total);
    }
};
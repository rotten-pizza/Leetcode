class Solution {
public:
    int solve(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int value=0;
        for(int index=i;index<=j;index++){
            int temp=nums[i-1]*nums[index]*nums[j+1]+
                        solve(i,index-1,nums,dp)+solve(index+1,j,nums,dp);
            value=max(value,temp);
        }
        return dp[i][j]=value;
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(1,nums.size()-2,nums,dp);
    }
};
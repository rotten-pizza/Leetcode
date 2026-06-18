class Solution {
public:
    vector<int>dp;
    Solution(){dp.resize(1001,-1);}
    int solve(int index,int n,vector<int>&nums){
        if(index>=n)return 0;
        if(dp[index]!=-1)return dp[index];
        int ans=max(solve(index+2,n,nums)+nums[index],solve(index+1,n,nums));
        return dp[index]=ans;
    }
    int rob(vector<int>& nums) {
        solve(0,nums.size(),nums);
       return dp[0];
    }
};
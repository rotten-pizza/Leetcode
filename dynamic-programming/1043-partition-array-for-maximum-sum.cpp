class Solution {
public:
    int solve(int i,int j,vector<int>&arr,vector<vector<int>>&dp,int k){
        if(i>j)return 0;
        // if(i==j)return arr[i];
        if(dp[i][j]!=-1)return dp[i][j];
        int maxi=INT_MIN,max_till_now=-1;
        for(int index=i;index<=j&&index<i+k;index++){
            max_till_now=max(max_till_now,arr[index]);
            int total_of_segment=max_till_now*(index-i+1)+solve(index+1,j,arr,dp,k);
            maxi=max(total_of_segment,maxi);
        }
        return dp[i][j]=maxi;
        }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<vector<int>>dp(arr.size(),vector<int>(arr.size(),-1));
        return solve(0,arr.size()-1,arr,dp,k);
    }
};
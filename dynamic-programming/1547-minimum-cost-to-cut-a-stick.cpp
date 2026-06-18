class Solution {
public:
    int solve(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int value=1e9;
        for(int index=i;index<=j;index++){
            int temp=cuts[j+1]-cuts[i-1]+solve(i,index-1,cuts,dp)+solve(index+1,j,cuts,dp);
            value=min(value,temp);
        }
        return dp[i][j]=value;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.push_back(0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(cuts.size(),vector<int>(cuts.size(),-1));
       return  solve(1,cuts.size()-2,cuts,dp);
    }
};
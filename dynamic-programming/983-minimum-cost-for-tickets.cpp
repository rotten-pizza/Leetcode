class Solution {
public:
    int dp[367];
    int solve(int index,vector<int>&days,vector<int>&costs){
        if(index==days.size()){
            return 0;
        }
        if(dp[index]!=-1)return dp[index];
        int ans=1e9;
        // 1 day pass
        ans=min(ans,costs[0]+solve(upper_bound(days.begin(),days.end(),days[index])-days.begin(),days,costs));
        // 7 days
        ans=min(ans,costs[1]+solve(upper_bound(days.begin(),days.end(),days[index]+6)-days.begin(),days,costs));
        // 30 days
        ans=min(ans,costs[2]+solve(upper_bound(days.begin(),days.end(),days[index]+29)-days.begin(),days,costs));
        return dp[index]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp,-1,sizeof(dp));
        return solve(0,days,costs);
    }
};
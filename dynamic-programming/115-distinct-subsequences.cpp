class Solution {
public:
    int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
        if(j<0)return 1;
        if(i<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        // matching
        if(s1[i]==s2[j]){
            int store=0;
            // take s1[i]
            store+=solve(i-1,j-1,s1,s2,dp);
            // not take s1[i]and find another 
            store+=solve(i-1,j,s1,s2,dp);
            return dp[i][j]=store;
        }
        // not match
        return dp[i][j]=solve(i-1,j,s1,s2,dp);
    }
    int numDistinct(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s1,s2,dp);
    }
};
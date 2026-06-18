class Solution {
public:
     int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
        //if no s2 left to copy
        if(j<0)return i+1;
        // if no letters left in s1
        if(i<0)return j+1;
        if(dp[i][j]!=-1)return dp[i][j];
        // replace
        int replace=1+solve(i-1,j-1,s1,s2,dp);
        //delete
        int del=1+solve(i-1,j,s1,s2,dp);
        // insert
        int insert=1+solve(i,j-1,s1,s2,dp);
        // same
        int same=1e9;
        if(s1[i]==s2[j])same=replace-1;
        return dp[i][j]=min(replace,min(del,min(insert,same)));
     }
    int minDistance(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s1,s2,dp);
    }
};
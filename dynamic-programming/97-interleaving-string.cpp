class Solution {
public:
    bool solve(string &s1,string&s2,string&s3,int i,int j,vector<vector<int>>&dp){
        if(i==s1.size()&&j==s2.size()&&i+j==s3.size())return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        bool ans=0;
        // check if s1 matches
        if(s1[i]==s3[i+j])ans|=solve(s1,s2,s3,i+1,j,dp);
        // check if s2 matches
        if(s2[j]==s3[i+j])ans|=solve(s1,s2,s3,i,j+1,dp);
        return dp[i][j]=ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())return 0;
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s3,0,0,dp);
    }
};
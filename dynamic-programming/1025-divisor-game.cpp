class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n==1)return false;
        if(n==2)return true;
        if(dp[n]!=-1)return dp[n];
        bool ans=false;
        for(int i=1;i<n;i++){
            if(n%i==0)ans|=!solve(n-i,dp);
        }
        return dp[n]=ans;
    }
    bool divisorGame(int n) {
        vector<int>dp(n+1,-1);
         return solve(n,dp);
        
    }
};
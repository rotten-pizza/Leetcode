class Solution {
public:
int sol(vector<int>&dp,int n){
    if(dp[n]!=-1)return dp[n];
    return dp[n]=max(2*sol(dp,n-2),3*sol(dp,n-3));
}
    int integerBreak(int n) {
    vector<int>dp(max(10+1,n+1),-1);
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    dp[4]=4;
    dp[5]=6;
    dp[6]=9;
    sol(dp,n);
    return dp[n];
    }
};
class Solution {
public:
    int dp[1001][1001];
    int solve(int last_copied,int number_of_a,int target){
        if(number_of_a>target)return 1e9;
        if(number_of_a==target)return 0;
        if(dp[last_copied][number_of_a]!=-1)return dp[last_copied][number_of_a];
        // use last copied
        int paste=1+solve(last_copied,number_of_a+last_copied,target);
        // copy
        int copy=1e9;
        if(number_of_a!=last_copied)copy=1+solve(number_of_a,number_of_a,target);
        return dp[last_copied][number_of_a]=min(copy,paste);
    }
    int minSteps(int n) {
        memset(dp,-1,sizeof(dp));
        if(n==1)return 0;
        return 1+solve(1,1,n);
    }
};
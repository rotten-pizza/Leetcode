class Solution {
public:
    int dp[51][51][51];
    int mod=1e9+7;
    int solve(int x,int y,int moves,int n,int m){
        if(moves==0)return 0;
        if(dp[x][y][moves]!=-1)return dp[x][y][moves];
        int i[4]={0,1,-1,0};
        int j[4]={1,0,0,-1};
        int ans=0;
        for(int k=0;k<4;k++){
            if(x+i[k]<0||x+i[k]>=n||y+j[k]<0||y+j[k]>=m){
                ans++;
            }
            else{
                ans+=solve(x+i[k],y+j[k],moves-1,n,m);
                ans%=mod;
            }
        }
        return dp[x][y][moves]=ans%mod;
    }
    int findPaths(int n, int m, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return solve(startRow,startColumn,maxMove,n,m);
    }
};
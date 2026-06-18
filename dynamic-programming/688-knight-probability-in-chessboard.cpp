class Solution {
public:
    vector<pair<int,int>>moves={{1,2},{2,1},{-1,2},{2,-1},{-1,-2},{1,-2},{-2,1},{-2,-1}};
    double dp[101][26][26];
    double solve(int x,int y,int n,int moves_left){
        if(x<0||y<0||x>=n||y>=n)return 1;
        if(moves_left==0)return 0;
        if(dp[moves_left][x][y]!=-1.0)return dp[moves_left][x][y];
        double ans=0;
        for(auto &movee:moves){
            int child_x=x+movee.first;
            int child_y=y+movee.second;
            ans+=solve(child_x,child_y,n,moves_left-1)/8.0;
        }
        return dp[moves_left][x][y]=ans;
    }
    double knightProbability(int n, int k, int row, int column) {
            for (int i = 0; i <= k; ++i)
        for (int j = 0; j < n; ++j)
            for (int l = 0; l < n; ++l)
                dp[i][j][l] = -1.0;

        return 1.0-solve(row,column,n,k);
    }
};
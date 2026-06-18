class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int ans=0,n=grid.size(),m=grid[0].size(),x,y;
        vector<pair<int,int>>move={{0,1},{1,0},{-1,0},{0,-1}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)continue;
                for(auto &movee:move){
                     x=movee.first+i;
                     y=movee.second+j;
                    if(x>=0&&y>=0&&x<n&&y<m&&grid[x][y]==1)continue;
                    ans++;
                }
            }
        }
        return ans;
    }
};
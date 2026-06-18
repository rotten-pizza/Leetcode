class Solution {
public:
    int dfs(vector<vector<int>>&grid,int x,int y){
        int original_gold=grid[x][y];
        grid[x][y]=0;
        int n=grid.size(),m=grid[0].size();
        vector<pair<int,int>>movement={{0,1},{1,0},{-1,0},{0,-1}};
        int max_gold=0;
        for(auto &move:movement){
            int child_x=move.first+x;
            int child_y=move.second+y;
            if(child_x>=0&&child_y>=0&&child_x<n&&child_y<m&&grid[child_x][child_y]!=0){
                max_gold=max(max_gold,dfs(grid,child_x,child_y));
            }
        }
        grid[x][y]=original_gold;
        return max_gold+original_gold;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
               if(grid[i][j]!=0) ans=max(ans,dfs(grid,i,j));
            }
        }
        return ans;
    }
};
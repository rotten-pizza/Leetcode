class Solution {
public:
    void dfs(int &x,int &y,vector<vector<int>>& grid,vector<vector<bool>>& vis,vector<pair<int,int>>&store_border
    ,vector<pair<int,int>>&move,int &color){
        vis[x][y]=1;
        int same=0;
        for(auto &movee:move){
            int x_child=movee.first+x;
            int y_child=movee.second+y;
            if(x_child>=0&&y_child>=0&&x_child<grid.size()&&y_child<grid[0].size()){
                if(grid[x_child][y_child]==color){
                    same++;
                    if(vis[x_child][y_child]==0){
                        dfs(x_child,y_child,grid,vis,store_border,move,color);
                    }
                }
            }
        }
        if(same<4)store_border.push_back({x,y});
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        vector<pair<int,int>>store_border,move={{0,1},{1,0},{-1,0},{0,-1}};
        dfs(row,col,grid,vis,store_border,move,grid[row][col]);
        for(auto it:store_border){
            grid[it.first][it.second]=color;
        }
        return grid;

    }
};
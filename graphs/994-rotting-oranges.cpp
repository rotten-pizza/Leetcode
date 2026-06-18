class Solution {
public:
    bool isValid(int x,int y,int n,int m){
        return x>=0&&x<n&&y<m&&y>=0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
            int n=grid.size(),m=grid[0].size();
                vector<pair<int,int>>move={{-1,0},{1,0},{0,1},{0,-1}};
            queue<pair<int,int>>q;
            vector<vector<int>>vis(n,vector<int>(m,-1));
            int count_of_1s=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]==2){
                    q.push({i, j});
                    vis[i][j]=0;
                    }
                    else if(grid[i][j]==1)count_of_1s++;
                }
            } 
            int maxi=0;
            while(!q.empty()){
                auto x=q.front();
                q.pop();
                for(auto z:move){
                    int x_child=x.first+z.first;
                    int y_child=x.second+z.second;
                    if(isValid(x_child, y_child, n, m)&& vis[x_child][y_child]==-1&&grid[x_child][y_child]==1){
                        q.push({x_child,y_child});
                        vis[x_child][y_child]=vis[x.first][x.second]+1;
                        count_of_1s--;
                        maxi=max(maxi,vis[x_child][y_child]);
                    }
                }
            }
        if(count_of_1s)return -1;
        return maxi;
    }
};
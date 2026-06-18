class Solution {
public:
    bool is_possible(vector<vector<int>>& grid,int &max_height){
        int n=grid.size();
        vector<int>vis(n*n);
        int source=0;
        vector<pair<int,int>>movee={{0,1},{1,0},{0,-1},{-1,0}};
        queue<pair<int,int>>q;
        vis[0]=1;
        q.push({0,0});
    while(!q.empty()){
        for(auto &move:movee){
            int child_x=q.front().first+move.first;
            int child_y=q.front().second+move.second;
            if(child_x>=0&&child_y>=0&&child_x<n&&child_y<n&&vis[child_x*n+child_y]==0&&grid[child_x][child_y]<=max_height){
            if(child_x==n-1&&child_y==n-1)return true;
                q.push({child_x,child_y});
                vis[child_x*n+child_y]=1;
            }
        }
        q.pop();
    }
        return false;
    }
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int start=grid[0][0],end=n*n+1,ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(is_possible(grid,mid)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};
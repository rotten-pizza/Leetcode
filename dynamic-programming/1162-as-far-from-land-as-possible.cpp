class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<pair<int,int>>movee={{0,1},{1,0},{0,-1},{-1,0}};
        int count0=0,n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            if(grid[i][j]==1){q.push({i,j});}
            else count0++;
        }
        if(q.size()==0||count0==0)return -1;
        int dis=0;
        while(!q.empty()){
            int len=q.size();
            dis++;
            for(int i=0;i<len;i++){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(auto &move:movee){
                    int childx=x+move.first;
                    int childy=y+move.second;
                    if(childx>=0&&childy>=0&&childy<m&&childx<n&&grid[childx][childy]==0){
                        q.push({childx,childy});
                        grid[childx][childy]=1;
                    }
                }
            }
        }
        return dis-1;
    }
};
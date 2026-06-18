class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        vector<pair<int,int>>move={{0,1},{1,0},{0,-1},{-1,0}};
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                ans[i][j]=0;
                q.push({i,j});
            }
        }
        int distance=0;
        while(!q.empty()){
            int len=q.size();
            distance++;
            for(int i=0;i<len;i++){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(auto movee:move){
                    int x_child=x+movee.first;
                    int y_child=y+movee.second;
                    if(x_child>=0&&y_child>=0&&x_child<n&&y_child<m&&ans[x_child][y_child]==-1){
                        ans[x_child][y_child]=distance;
                        q.push({x_child,y_child});
                    }
                }
            }
        }
        return ans;
    }
};
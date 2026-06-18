class Solution {
public:
bool isvalid(int x,int y,int n,int m){
return x>=0&&x<n&&y>=0&&y<m;
}
void dfs(int x,int y,vector<vector<char>>& board,vector<vector<int>>&vis,int n,int m){
vis[x][y]=1;
vector<pair<int,int>>movements={{1,0},{0,1},{-1,0},{0,-1}};
for( auto &move:movements){
    int x_child=move.first+x;
    int y_child=move.second+y;
    if(isvalid(x_child,y_child,n,m) && vis[x_child][y_child]==0){
        if(board[x_child][y_child]=='O'){
            dfs(x_child,y_child,board,vis,n,m);    
            }
    }
}
}
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if((i==0||j==0||i==n-1||j==m-1)&&board[i][j]=='O')dfs(i,j,board,vis,n,m);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0)board[i][j]='X';
            }
        }
    }
};
class Solution {
public:
bool isvalid(int x,int y,int n,int m){
return x>=0&&x<n&&y>=0&&y<m;
}

    int numEnclaves(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        vector<pair<int,int>>movements={{1,0},{0,1},{-1,0},{0,-1}};
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if((i==0||j==0||i==n-1||j==m-1)&&board[i][j]==1){
                 q.push({i, j});
                 board[i][j]=0;
               }
            }
        }
 while(!q.empty()){
     int x=q.front().first;
     int y=q.front().second;
     q.pop();
     for(auto move:movements){
         int x_child=move.first+x;
         int y_child=move.second+y;
         if(isvalid(x_child, y_child, n, m)&&board[x_child][y_child]==1){
             q.push({x_child,y_child});
            board[x_child][y_child]=0;
         }
     }
 }
 int count=0;
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         if(board[i][j]==1)count++;
     }
 }
    return count;
    }
};
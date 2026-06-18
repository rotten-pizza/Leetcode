class Solution {
public:
    void solve(int x,int y,vector<vector<int>>&board,
    vector<vector<int>>&s){
        // horizontal
        for(int col=y;col<8;col++ ){
            if(board[x][col]==0)continue;
            if(board[x][col]==1)
            s.push_back({x,col});
            break;
        }
        for(int col=y;col>=0;col-- ){
            if(board[x][col]==0)continue;
            if(board[x][col]==1)s.push_back({x,col});
            break;
        }
        //vertical
        for(int row=x;row>=0;row-- ){
            if(board[row][y]==0)continue;
            if(board[row][y]==1)s.push_back({row,y});
            break;
        }
        for(int row=x;row<8;row++ ){
            if(board[row][y]==0)continue;
            if(board[row][y]==1)s.push_back({row,y});
            break;
        }
        // down and right
        int col=y;
        for(int row=x;row<8&&col<8;row++){
            if(board[row][col]==0){col++;continue;}
            if(board[row][col]==1)s.push_back({row,col});
            break;
        }
        // down and left
        col=y;
        for(int row=x;row<8&&col>=0;row++){
            if(board[row][col]==0){col--;continue;}
            if(board[row][col]==1)s.push_back({row,col});
            break;
        }
        // up and right
        col=y;
        for(int row=x;row>=0&&col<8;row--){
            if(board[row][col]==0){col++;continue;}
            if(board[row][col]==1)s.push_back({row,col});
            break;
        }
        // up and left
        col=y;
        for(int row=x;row>=0&&col>=0;row--){
            if(board[row][col]==0){col--;continue;}
            if(board[row][col]==1)s.push_back({row,col});
            break;
        }
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        // set<pair<int,int>>ans;
        vector<vector<int>>board(8,vector<int>(8,0));
        // 0 means empty, 1 is queen ,2 is king
        for(auto x:queens)board[x[0]][x[1]]=1;
        // for(auto x:king)board[x[0]][x[1]]=2;
        // for(auto x:king){
        vector<vector<int>>a;
            solve(king[0],king[1],board,a);
        // }
        // for(auto x:ans)a.push_back({x.first,x.second});
        return a;
    }
};
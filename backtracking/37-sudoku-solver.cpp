class Solution {
public:
    bool is_valid(vector<vector<char>>& board,int row,int col,char number){
        for(int i=0;i<9;i++){
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==number)return false;
            if(board[i][col]==number)return false;
            if(board[row][i]==number)return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                //check if block empty
                if(board[i][j]=='.'){
                    // put every element 1-9 in it
                    for(char k='1';k<='9';k++){
                        // check if valid for k
                        if(is_valid(board,i,j,k)){
                            // if valid then solve for more
                            board[i][j]=k;
                            if(solve(board)){
                                // if solved then return
                                return true;
                            }
                            // if not solved then it means try another number
                            else {board[i][j]='.';}
                        }
                    }
                    // if we try every 1-9 and still dont get answer that means it is invalid board
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
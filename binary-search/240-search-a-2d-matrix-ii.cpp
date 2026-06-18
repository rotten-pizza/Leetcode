class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int x=matrix.size()-1,y=0;
        while(x>=0&&y<matrix[0].size()){
            if(matrix[x][y]==target)return true;
            else if(matrix[x][y]>target)x--;
            else y++;
        }
        return false;
    }
};
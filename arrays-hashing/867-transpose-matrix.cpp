class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>>ans(matrix[0].size());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
            ans[j].push_back(matrix[i][j]);
        }
        return ans;
    }
};
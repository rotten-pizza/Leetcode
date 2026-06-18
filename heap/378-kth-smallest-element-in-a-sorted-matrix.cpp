class Solution {
public: 
    int position_greater;
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),m=matrix[0].size();
        int ans=1e9,greater_than=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                greater_than=0;
                for(int k=0;k<n;k++){
                    greater_than+=upper_bound(matrix[k].begin(),matrix[k].end(),matrix[i][j])-matrix[k].begin();
                }
                if(greater_than>=k)ans=min(ans,matrix[i][j]);
            }
        }
        return ans;
    }
};
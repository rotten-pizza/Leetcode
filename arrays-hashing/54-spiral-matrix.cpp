class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0,right=matrix[0].size()-1,up=0,down=matrix.size()-1,n=matrix.size()*matrix[0].size();
        vector<int>ans;
        while(ans.size()<n){
            //right
            for(int i=left;i<=right;i++)
            ans.push_back(matrix[up][i]);
            up++;
            if(ans.size()==n)return ans;
            //down
            for(int i=up;i<=down;i++)
            ans.push_back(matrix[i][right]);
            if(ans.size()==n)return ans;
            right--;
            //left
            for(int i=right;i>=left;i--)
            ans.push_back(matrix[down][i]);
            if(ans.size()==n)return ans;
            down--;
            //up
            for(int i=down;i>=up;i--)
            ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
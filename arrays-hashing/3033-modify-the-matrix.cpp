class Solution {
public:
   
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
     for(int i=0;i<m;i++){
        int number=-1;
        vector<int>indexwith1;
        for(int j=0;j<n;j++){
            if(mat[j][i]==-1)indexwith1.push_back(j);
             else number=max(number,mat[j][i]);
        }
        for(int j=0;j<indexwith1.size();j++){
            mat[indexwith1[j]][i]=number;
        }
     }   
     return mat;
    }
};